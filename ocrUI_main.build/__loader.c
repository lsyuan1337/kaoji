
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 484 > 0
static unsigned char *bytecode_data[484];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_OCR_UI_REAL_v225(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BlpImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BmpImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BufrStubImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$CurImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$DcxImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$DdsImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$EpsImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FitsImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FitsStubImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FliImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FpxImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FtexImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GbrImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GifImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpGradientFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpPaletteFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GribStubImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Hdf5StubImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IcnsImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IcoImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageChops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageCms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageColor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageDraw(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageDraw2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageEnhance(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFilter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFont(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageGrab(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageMode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageOps(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImagePalette(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImagePath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageQt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageSequence(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageShow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageStat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageTk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageWin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImtImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IptcImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Jpeg2KImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegPresets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$McIdasImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MicImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpegImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpoImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MspImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PaletteFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PalmImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PcdImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PcxImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PdfImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PdfParser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PixarImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PngImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PpmImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PsdImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PyAccess(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SgiImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SpiderImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SunImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TgaImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffTags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$WebPImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$WmfImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XVThumbImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XbmImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XpmImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_binary(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_deprecate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_tkinter_finder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$features(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___parents_main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_astunparse(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_astunparse$printer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_astunparse$unparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_brotli(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$builder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$builder$_html5lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$builder$_htmlparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$builder$_lxml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$dammit(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$element(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$formatter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$commontypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$cparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$ffiplatform(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$lock(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$model(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$pkgconfig(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$vengine_cpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$vengine_gen(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$verifier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$big5freq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$big5prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$chardistribution(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$charsetgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$charsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$codingstatemachine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$codingstatemachinedict(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$cp949prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$enums(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$escprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$escsm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$eucjpprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euckrfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euckrprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euctwfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euctwprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$gb2312freq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$gb2312prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$hebrewprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$jisfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$johabfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$johabprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$jpcntx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langbulgarianmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langgreekmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langhebrewmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langrussianmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langthaimodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langturkishmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$latin1prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$macromanprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcharsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcsgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcssm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$resultdict(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sbcharsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sbcsgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sjisprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$universaldetector(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$utf1632prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$utf8prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$assets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$cd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$constant(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$legacy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$md(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$models(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cloudpickle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cloudpickle$cloudpickle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cloudpickle$cloudpickle_fast(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cloudpickle$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$ansi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$ansitowin32(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$initialise(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$win32(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$winterm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cssselect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cssselect$parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cssselect$xpath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cycler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dataClass(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$easter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$_parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$isoparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$relativedelta(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$rrule(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_factories(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$tz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$win(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$zoneinfo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$ElementTree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$cElementTree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$expatbuilder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$expatreader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$minidom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$pulldom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$sax(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$xmlrpc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$_dill(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$_objects(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$detect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$info(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$objtypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$pointers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$settings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$source(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dill$temp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_et_xmlfile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_et_xmlfile$xmlfile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_feiShuRobot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fsspec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fsspec$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fsspec$asyn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fsspec$caching(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fsspec$callbacks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fsspec$compression(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fsspec$config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fsspec$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fsspec$dircache(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fsspec$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fsspec$implementations(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fsspec$implementations$local(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fsspec$mapping(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fsspec$registry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fsspec$spec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fsspec$transaction(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fsspec$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_funcs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_getAreaTuple(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_greenlet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h5py(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h5py$_hl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h5py$_hl$attrs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h5py$_hl$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h5py$_hl$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h5py$_hl$dataset(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h5py$_hl$datatype(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h5py$_hl$dims(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h5py$_hl$files(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h5py$_hl$filters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h5py$_hl$group(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h5py$_hl$selections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h5py$_hl$selections2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h5py$_hl$vds(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h5py$h5py_warnings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_h5py$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$idnadata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$intranges(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$package_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$uts46data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_importlib_resources(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_importlib_resources$_adapters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_importlib_resources$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_importlib_resources$_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_importlib_resources$_itertools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_importlib_resources$_legacy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_importlib_resources$abc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_importlib_resources$readers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jdcal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$_identifier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$async_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$bccache(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$compiler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$debug(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$defaults(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$environment(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$filters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$idtracking(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$lexer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$loaders(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$nodes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$optimizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$runtime(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$tests(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_jinja2$visitor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_kiwisolver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lmdb(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lmdb$_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lmdb$cffi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$cssselect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html$_setmixin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html$defs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_markupsafe(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_markupsafe$_native(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_api$deprecation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_blocking_input(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_cm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_cm_listed(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_color_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_constrained_layout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_enums(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_layoutgrid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_mathtext(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_mathtext_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_pylab_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_text_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$afm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$artist(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_secondary_axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_subplots(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axis(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backend_bases(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backend_managers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backend_tools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$_backend_tk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_agg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_tkagg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$bezier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$category(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$cbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$cm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$collections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$colorbar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$colors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$container(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$contour(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$dates(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$docstring(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$dviread(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$figure(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$font_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$fontconfig_pattern(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$gridspec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$hatch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$legend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$legend_handler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$lines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$markers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$mathtext(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$mlab(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$offsetbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$patches(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$path(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$patheffects(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$projections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$projections$geo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$projections$polar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$pyplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$quiver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$rcsetup(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$scale(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$spines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$stackplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$streamplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$style(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$style$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$texmanager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$textpath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$ticker(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tight_bbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tight_layout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$transforms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$triangulation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$tricontour(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$trifinder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$triinterpolate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$tripcolor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$triplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$trirefine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$tritools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$units(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$widgets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$art3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$axes3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$axis3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$proj3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$postLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$preLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_my_logger(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_my_telnetlib_ck(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$__config__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_distributor_init(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_globals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_pytesttester(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$_inspect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$py3k(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs_scalars(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_asarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype_ctypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_internal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_methods(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_string_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_type_aliases(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_ufunc_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$arrayprint(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$defchararray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$einsumfunc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$fromnumeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$getlimits(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$machar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$memmap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$multiarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numerictypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$overrides(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$records(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$umath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ctypeslib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$_pocketfft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_datasource(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_iotools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraypad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraysetops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arrayterator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$format(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$histograms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$index_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$mixins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$nanfunctions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$npyio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$scimath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$stride_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$twodim_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$type_check(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$ufunclike(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$extras(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$mrecords(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib$defmatrix(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$_polybase(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$chebyshev(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite_e(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$laguerre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$legendre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polyutils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random$_pickle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_add_docstring(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_array_like(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_char_codes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_dtype_like(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_generic_alias(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_nbit(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_scalars(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$typing$_shape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ocrFunc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_odf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_odf$attrconverters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_odf$config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_odf$draw(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_odf$element(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_odf$grammar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_odf$load(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_odf$manifest(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_odf$meta(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_odf$namespaces(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_odf$odfmanifest(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_odf$office(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_odf$opendocument(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_odf$style(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_odf$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_odf$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$_constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$_writer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$cell(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$read_only(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$cell$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$_3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$area_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$axis(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$bar_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$bubble_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$chartspace(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$data_source(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$descriptors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$error_bar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$label(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$layout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$legend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$line_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$marker(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$picture(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$pie_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$pivot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$plotarea(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$print_settings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$radar_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$reader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$reference(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$scatter_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$series(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$series_factory(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$shapes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$stock_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$surface_chart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$title(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$trendline(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chart$updown_bars(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$chartsheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$custom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$properties(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$protection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$publish(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$relation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$chartsheet$views(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments$author(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments$comment_sheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments$comments(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$comments$shape_writer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$compat$numbers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$compat$strings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$excel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$namespace(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$nested(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$sequence(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$descriptors$serialisable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$colors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$connector(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$drawing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$effect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$fill(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$geometry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$graphic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$line(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$picture(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$properties(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$relation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$spreadsheet_drawing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$drawing$xdr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formatting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formatting$formatting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formatting$rule(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formula(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formula$tokenizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$formula$translate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$extended(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$manifest(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$relationship(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$packaging$workbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot$cache(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot$fields(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot$record(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$pivot$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader$drawings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader$excel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader$strings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$reader$workbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$alignment(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$borders(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$builtins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$cell_style(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$colors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$differential(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$fills(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$fonts(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$named_styles(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$numbers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$protection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$proxy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$styleable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$stylesheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$styles$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$bound_dictionary(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$cell(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$datetime(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$escape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$formulas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$indexed_list(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$protection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$utils$units(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$_writer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$child(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$defined_name(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$external_link(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$external_link$external(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$external_reference(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$function_group(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$properties(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$protection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$smart_tags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$views(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$web(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$workbook$workbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$_read_only(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$_reader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$_write_only(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$_writer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$cell_range(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$copier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$datavalidation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$dimensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$drawing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$filters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$header_footer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$hyperlink(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$merge(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$page(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$pagebreak(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$properties(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$protection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$related(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$scenario(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$views(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$worksheet$worksheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$writer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$writer$excel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$writer$theme(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$xml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$xml$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_openpyxl$xml$functions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config$config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config$dates(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config$display(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config$localization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_libs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_libs$tslibs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_libs$window(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_typing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$extensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$indexers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$arrays(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$_optional(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$chainmap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$numpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$numpy$function(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$pickle_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$pyarrow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$accessor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$aggregation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$algorithms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$apply(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$masked_reductions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$putmask(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$quantile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$replace(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$take(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$transforms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arraylike(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$_arrow_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$_mixins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$_ranges(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$boolean(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$categorical(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$datetimelike(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$datetimes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$floating(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$integer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$interval(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$masked(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$numeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$numpy_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$period(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse$accessor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse$array(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse$dtype(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse$scipy_sparse(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$string_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$string_arrow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$timedeltas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$align(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$check(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$engines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$eval(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$expr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$expressions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$ops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$parsing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$pytables(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$scope(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$config_init(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$construction(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$describe(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$cast(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$concat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$dtypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$generic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$inference(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$missing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$flags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$frame(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$generic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$categorical(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$generic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$groupby(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$grouper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$numba_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$ops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$accessors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$category(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$datetimelike(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$datetimes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$extension(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$frozen(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$interval(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$multi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$numeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$period(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$range(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$timedeltas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$array_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$blocks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$concat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$construction(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$managers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$ops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$missing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$nanops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$array_ops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$dispatch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$docstrings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$invalid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$mask_ops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$methods(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$missing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$resample(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$concat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$melt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$merge(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$pivot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$reshape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$tile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$roperator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$series(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$shared_docs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$sorting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$strings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$strings$accessor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$strings$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$strings$object_array(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools$datetimes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools$numeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools$timedeltas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools$times(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$util$hashing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$util$numba_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$doc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$ewm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$expanding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$indexers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$numba_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$online(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$rolling(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$errors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$clipboard(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$clipboards(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$date_converters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_odfreader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_odswriter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_openpyxl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_pyxlsb(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_xlrd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_xlsxwriter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_xlwt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$feather_format(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$_color_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$console(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$css(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$csvs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$excel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$format(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$html(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$info(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$latex(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$printing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$string(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$style(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$style_render(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$xml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$gbq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$html(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$json(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$json$_json(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$json$_normalize(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$json$_table_schema(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$orc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parquet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$base_parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$c_parser_wrapper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$python_parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$readers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$pickle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$pytables(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas$sas7bdat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas$sas_constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas$sas_xport(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas$sasreader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$spss(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sql(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$stata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$xml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_misc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries$frequencies(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries$offsets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_decorators(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_print_versions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_validators(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pkg_resources$$45$postLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psycopg2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psycopg2$_ipaddress(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psycopg2$_json(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psycopg2$_range(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psycopg2$extensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psycopg2$extras(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psycopg2$sql(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyarrow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyarrow$_compute_docstrings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyarrow$_generated_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyarrow$compute(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyarrow$dataset(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyarrow$feather(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyarrow$filesystem(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyarrow$fs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyarrow$hdfs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyarrow$ipc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyarrow$pandas_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyarrow$parquet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyarrow$parquet$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyarrow$serialization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyarrow$types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyarrow$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyarrow$vendored(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyarrow$vendored$docscrape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyarrow$vendored$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$codec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$codec$ber(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$codec$ber$decoder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$codec$ber$eoo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$codec$cer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$codec$cer$decoder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$codec$der(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$codec$der$decoder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$compat$binary(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$compat$calling(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$compat$dateandtime(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$compat$integer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$compat$octets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$compat$string(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$debug(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$type(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$type$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$type$char(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$type$constraint(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$type$error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$type$namedtype(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$type$namedval(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$type$tag(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$type$tagmap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$type$univ(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyasn1$type$useful(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pynput(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pynput$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pynput$_util$win32(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pynput$_util$win32_vks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pynput$keyboard(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pynput$keyboard$_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pynput$keyboard$_win32(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pynput$mouse(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pynput$mouse$_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pynput$mouse$_win32(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$actions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$diagram(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$results(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$testing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$unicode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyperclip(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$clipboard(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$clipboard$no_clipboard(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$clipboard$win32_clipboard(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$console(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$console$ansi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$console$console(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$console$event(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$keysyms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$keysyms$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$keysyms$ironpython_keysyms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$keysyms$keysyms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$keysyms$winconstants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$lineeditor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$lineeditor$history(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$lineeditor$lineobj(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$lineeditor$wordmatcher(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$logger(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$modes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$modes$basemode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$modes$emacs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$modes$notemacs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$modes$vi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$py3k_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$release(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$rlmain(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyreadline$unicode_helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytesseract(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytesseract$pytesseract(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$lazy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$tzfile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$tzinfo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_readline(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$adapters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$auth(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$certs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$cookies(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$hooks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$models(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$big5freq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$big5prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$chardistribution(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$charsetgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$charsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$codingstatemachine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$cp949prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$escprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$escsm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$eucjpprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$euckrfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$euckrprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$euctwfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$euctwprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$gb2312freq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$gb2312prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$hebrewprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$jisfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$jpcntx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$langbulgarianmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$langcyrillicmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$langgreekmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$langhebrewmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$langhungarianmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$langthaimodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$latin1prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$mbcharsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$mbcsgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$mbcssm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$sbcharsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$sbcsgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$sjisprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$universaldetector(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$charade$utf8prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$urllib3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$urllib3$_collections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$urllib3$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$urllib3$connectionpool(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$urllib3$contrib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$urllib3$contrib$pyopenssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$urllib3$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$urllib3$fields(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$urllib3$filepost(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$urllib3$packages(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$urllib3$packages$ordered_dict(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$urllib3$packages$six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$urllib3$packages$ssl_match_hostname(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$urllib3$poolmanager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$urllib3$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$urllib3$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages$urllib3$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$sessions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$status_codes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$structures(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests_toolbelt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests_toolbelt$_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests_toolbelt$adapters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests_toolbelt$adapters$source(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests_toolbelt$adapters$ssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests_toolbelt$auth(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests_toolbelt$auth$_digest_auth_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests_toolbelt$auth$guess(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests_toolbelt$auth$http_proxy_digest(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests_toolbelt$multipart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests_toolbelt$multipart$decoder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests_toolbelt$multipart$encoder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests_toolbelt$streaming_iterator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests_toolbelt$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests_toolbelt$utils$user_agent(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$__config__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_distributor_init(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_bunch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_ccallback(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_pep440(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_testutils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_threadsafety(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_uarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_uarray$_backend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$decorator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$deprecation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$doccer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$uarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$constants$codata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$constants$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_backend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_basic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_fftlog(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_pocketfft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_pocketfft$basic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_pocketfft$helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_pocketfft$realtransforms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$fft$_realtransforms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_bvp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$bdf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$dop853_coefficients(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$ivp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$lsoda(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$radau(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ivp$rk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_ode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_quad_vec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$_quadrature(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$odepack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$integrate$quadpack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_bsplines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_cubic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_fitpack_impl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_pade(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$_rbfinterp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$fitpack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$fitpack2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$interpolate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$ndgriddata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$polyint(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$interpolate$rbf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$io(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$io$_fortran(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$io$harwell_boeing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$io$harwell_boeing$_fortran_format_parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$io$harwell_boeing$hb(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$io$idl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$io$matlab(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$io$matlab$byteordercodes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$io$matlab$mio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$io$matlab$mio4(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$io$matlab$mio5(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$io$matlab$mio5_params(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$io$matlab$miobase(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$io$mmio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$io$netcdf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_decomp_cossin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_decomp_ldl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_decomp_polar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_decomp_qz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_expm_frechet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_interpolative_backend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_matfuncs_inv_ssq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_matfuncs_sqrtm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_procrustes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_sketches(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$_solvers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$basic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$blas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$decomp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$decomp_cholesky(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$decomp_lu(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$decomp_qr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$decomp_schur(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$decomp_svd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$flinalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$interpolative(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$lapack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$matfuncs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$misc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$linalg$special_matrices(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$misc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$misc$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$misc$doccer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$_ni_docstrings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$_ni_support(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$filters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$fourier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$interpolation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$measurements(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$ndimage$morphology(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_basinhopping(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_constraints(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_differentiable_functions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_differentialevolution(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_dual_annealing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_hessian_update_strategy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_highs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linprog(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linprog_doc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linprog_highs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linprog_ip(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linprog_rs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linprog_simplex(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_linprog_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq$bvls(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq$dogbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq$least_squares(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq$lsq_linear(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq$trf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_lsq$trf_linear(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_minimize(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_nnls(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_numdiff(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_qap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_remove_redundancy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_root(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_root_scalar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_shgo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_shgo_lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_shgo_lib$triangulation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_spectral(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr$canonical_constraint(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr$equality_constrained_sqp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr$minimize_trustregion_constr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr$projections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr$qp_subproblem(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr$report(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_constr$tr_interior_point(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_dogleg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_exact(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_krylov(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$_trustregion_ncg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$cobyla(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$lbfgsb(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$linesearch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$minpack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$nonlin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$optimize(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$slsqp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$tnc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$optimize$zeros(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$_index(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$_matrix_io(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$bsr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$compressed(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$construct(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$coo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$csc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$csgraph(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$csgraph$_laplacian(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$csgraph$_validation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$csr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$dia(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$dok(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$extract(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$lil(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_expm_multiply(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_norm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$_onenormest(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$dsolve(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$dsolve$_add_newdocs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$dsolve$linsolve(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$eigen(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$eigen$arpack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$eigen$arpack$arpack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$eigen$lobpcg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$eigen$lobpcg$lobpcg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$interface(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$isolve(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$isolve$_gcrotmk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$isolve$iterative(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$isolve$lgmres(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$isolve$lsmr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$isolve$lsqr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$isolve$minres(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$isolve$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$linalg$matfuncs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$spfuncs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$sparse$sputils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$_geometric_slerp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$_plotutils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$_procrustes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$_spherical_voronoi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$distance(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$kdtree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$transform(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$transform$_rotation_groups(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$spatial$transform$_rotation_spline(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$_basic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$_ellip_harm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$_lambertw(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$_logsumexp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$_spherical_bessel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$orthogonal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$sf_error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$special$spfun_stats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_binned_statistic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_binomtest(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_boost(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_bootstrap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_continuous_distns(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_crosstab(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_discrete_distns(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_distn_infrastructure(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_distr_params(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_entropy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_hypotests(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_ksstats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_mannwhitneyu(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_multivariate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_page_trend_test(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_qmc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_relative_risk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_rvs_sampling(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_stats_mstats_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_tukeylambda_stats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$_wilcoxon_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$contingency(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$distributions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$kde(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$morestats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$mstats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$mstats_basic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$mstats_extras(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$qmc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$stats$stats(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$__meta__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$css_match(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$css_parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$css_types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$pretty(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$connectors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$connectors$pyodbc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$cyextension(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mssql(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mssql$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mssql$information_schema(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mssql$json(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mssql$pymssql(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mssql$pyodbc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mysql(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mysql$aiomysql(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mysql$asyncmy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mysql$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mysql$cymysql(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mysql$dml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mysql$enumerated(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mysql$expression(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mysql$json(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mysql$mariadb(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mysql$mariadbconnector(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mysql$mysqlconnector(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mysql$mysqldb(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mysql$pymysql(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mysql$pyodbc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mysql$reflection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mysql$reserved_words(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$mysql$types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$oracle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$oracle$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$oracle$cx_oracle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$oracle$dictionary(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$oracle$oracledb(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$oracle$types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$postgresql(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$postgresql$_psycopg_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$postgresql$array(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$postgresql$asyncpg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$postgresql$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$postgresql$dml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$postgresql$ext(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$postgresql$hstore(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$postgresql$json(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$postgresql$named_types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$postgresql$pg8000(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$postgresql$pg_catalog(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$postgresql$psycopg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$postgresql$psycopg2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$postgresql$psycopg2cffi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$postgresql$ranges(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$postgresql$types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$sqlite(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$sqlite$aiosqlite(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$sqlite$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$sqlite$dml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$sqlite$json(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$sqlite$pysqlcipher(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$dialects$sqlite$pysqlite(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$engine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$engine$_py_processors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$engine$_py_row(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$engine$_py_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$engine$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$engine$characteristics(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$engine$create(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$engine$cursor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$engine$default(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$engine$events(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$engine$interfaces(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$engine$mock(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$engine$processors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$engine$reflection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$engine$result(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$engine$row(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$engine$url(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$engine$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$event(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$event$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$event$attr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$event$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$event$legacy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$event$registry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$exc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$ext(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$ext$compiler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$inspection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$log(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$pool(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$pool$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$pool$events(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$pool$impl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$schema(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$_dml_constructors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$_elements_constructors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$_py_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$_selectable_constructors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$_typing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$annotation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$cache_key(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$coercions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$compiler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$crud(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$ddl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$default_comparator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$dml(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$elements(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$events(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$expression(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$functions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$lambdas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$naming(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$operators(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$roles(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$schema(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$selectable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$sqltypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$traversals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$type_api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$sql$visitors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$util$_collections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$util$_concurrency_py3k(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$util$_has_cy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$util$_py_collections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$util$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$util$concurrency(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$util$deprecations(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$util$langhelpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$util$preloaded(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$util$queue(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$util$topological(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sqlalchemy$util$typing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$_VF(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$__config__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$__future__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$_classes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$_jit_internal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$_linalg_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$_lobpcg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$_lowrank(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$_masked(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$_namedtensor_internals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$_ops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$_six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$_sources(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$_storage_docs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$_tensor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$_tensor_docs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$_tensor_str(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$_torch_docs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$_utils_internal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$_vmap_internals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$ao(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$ao$nn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$ao$nn$sparse(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$ao$nn$sparse$quantized(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$ao$nn$sparse$quantized$dynamic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$ao$nn$sparse$quantized$dynamic$linear(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$ao$nn$sparse$quantized$linear(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$ao$nn$sparse$quantized$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$ao$quantization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$ao$quantization$fake_quantize(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$ao$quantization$fuse_modules(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$ao$quantization$fuser_method_mappings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$ao$quantization$observer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$ao$quantization$qconfig(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$ao$quantization$quant_type(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$ao$quantization$quantization_mappings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$ao$quantization$quantize(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$ao$quantization$quantize_jit(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$ao$quantization$stubs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$ao$quantization$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$autocast_mode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$autograd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$autograd$_functions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$autograd$_functions$tensor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$autograd$anomaly_mode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$autograd$forward_ad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$autograd$function(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$autograd$functional(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$autograd$grad_mode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$autograd$gradcheck(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$autograd$graph(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$autograd$profiler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$autograd$profiler_legacy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$autograd$profiler_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$autograd$variable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$backends(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$backends$cuda(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$backends$cudnn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$backends$cudnn$rnn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$backends$mkl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$backends$mkldnn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$backends$openmp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$backends$quantized(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$cpu(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$cpu$amp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$cpu$amp$autocast_mode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$cuda(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$cuda$_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$cuda$amp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$cuda$amp$autocast_mode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$cuda$amp$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$cuda$amp$grad_scaler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$cuda$graphs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$cuda$memory(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$cuda$nccl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$cuda$nvtx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$cuda$profiler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$cuda$random(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$cuda$sparse(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$cuda$streams(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$algorithms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$algorithms$_optimizer_overlap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$algorithms$_optimizer_overlap$optimizer_overlap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$algorithms$ddp_comm_hooks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$algorithms$ddp_comm_hooks$debugging_hooks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$algorithms$ddp_comm_hooks$default_hooks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$algorithms$join(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$algorithms$model_averaging(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$algorithms$model_averaging$averagers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$algorithms$model_averaging$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$autograd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$distributed_c10d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$fsdp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$fsdp$flatten_params_wrapper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$fsdp$fully_sharded_data_parallel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$fsdp$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$fsdp$wrap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$optim(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$optim$functional_adadelta(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$optim$functional_adagrad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$optim$functional_adam(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$optim$functional_adamax(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$optim$functional_adamw(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$optim$functional_rmsprop(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$optim$functional_rprop(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$optim$functional_sgd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$optim$optimizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$optim$post_localSGD_optimizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$optim$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$optim$zero_redundancy_optimizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$remote_device(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$rendezvous(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$rpc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$rpc$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$rpc$backend_registry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$rpc$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$rpc$functions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$rpc$internal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$rpc$options(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributed$rpc$server_process_global_profiler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$bernoulli(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$beta(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$binomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$categorical(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$cauchy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$chi2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$constraint_registry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$constraints(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$continuous_bernoulli(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$dirichlet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$distribution(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$exp_family(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$exponential(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$fishersnedecor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$gamma(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$geometric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$gumbel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$half_cauchy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$half_normal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$independent(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$kl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$kumaraswamy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$laplace(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$lkj_cholesky(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$log_normal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$logistic_normal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$lowrank_multivariate_normal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$mixture_same_family(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$multinomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$multivariate_normal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$negative_binomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$normal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$one_hot_categorical(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$pareto(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$poisson(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$relaxed_bernoulli(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$relaxed_categorical(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$studentT(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$transformed_distribution(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$transforms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$uniform(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$von_mises(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$weibull(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$distributions$wishart(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$fft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$functional(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$futures(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$fx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$fx$_compatibility(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$fx$_pytree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$fx$_symbolic_trace(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$fx$graph(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$fx$graph_module(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$fx$immutable_collections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$fx$interpreter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$fx$node(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$fx$operator_schemas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$fx$proxy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$fx$subgraph_rewriter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$hub(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$jit(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$jit$_async(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$jit$_builtins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$jit$_check(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$jit$_freeze(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$jit$_fuser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$jit$_monkeytype_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$jit$_recursive(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$jit$_script(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$jit$_serialization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$jit$_state(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$jit$_state$$45$preLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$jit$_trace(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$jit$annotations(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$jit$frontend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$multiprocessing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$multiprocessing$_atfork(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$multiprocessing$reductions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$multiprocessing$spawn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$_reduction(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$common_types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$functional(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$grad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$init(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$intrinsic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$intrinsic$modules(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$intrinsic$modules$fused(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$intrinsic$qat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$intrinsic$qat$modules(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$intrinsic$qat$modules$conv_fused(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$intrinsic$qat$modules$linear_relu(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$intrinsic$quantized(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$intrinsic$quantized$dynamic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$intrinsic$quantized$dynamic$modules(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$intrinsic$quantized$dynamic$modules$linear_relu(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$intrinsic$quantized$modules(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$intrinsic$quantized$modules$bn_relu(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$intrinsic$quantized$modules$conv_relu(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$intrinsic$quantized$modules$linear_relu(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$_functions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$activation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$adaptive(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$batchnorm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$channelshuffle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$container(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$conv(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$distance(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$dropout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$flatten(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$fold(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$instancenorm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$lazy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$linear(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$loss(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$module(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$normalization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$padding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$pixelshuffle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$pooling(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$rnn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$sparse(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$transformer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$upsampling(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$modules$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$parallel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$parallel$_functions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$parallel$comm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$parallel$data_parallel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$parallel$distributed(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$parallel$parallel_apply(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$parallel$replicate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$parallel$scatter_gather(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$parameter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$qat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$qat$dynamic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$qat$dynamic$modules(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$qat$dynamic$modules$linear(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$qat$modules(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$qat$modules$conv(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$qat$modules$embedding_ops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$qat$modules$linear(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantizable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantizable$modules(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantizable$modules$activation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantizable$modules$rnn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized$_reference(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized$_reference$modules(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized$_reference$modules$conv(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized$_reference$modules$linear(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized$_reference$modules$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized$dynamic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized$dynamic$modules(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized$dynamic$modules$conv(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized$dynamic$modules$linear(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized$dynamic$modules$rnn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized$functional(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized$modules(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized$modules$activation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized$modules$batchnorm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized$modules$conv(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized$modules$dropout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized$modules$embedding_ops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized$modules$functional_modules(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized$modules$linear(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized$modules$normalization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$quantized$modules$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$utils$clip_grad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$utils$convert_parameters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$utils$fusion(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$utils$init(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$utils$memory_format(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$utils$parametrizations(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$utils$parametrize(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$utils$rnn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$utils$spectral_norm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$nn$utils$weight_norm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$onnx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$onnx$operators(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$onnx$symbolic_caffe2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$onnx$symbolic_helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$onnx$symbolic_opset10(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$onnx$symbolic_opset11(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$onnx$symbolic_opset12(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$onnx$symbolic_opset13(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$onnx$symbolic_opset14(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$onnx$symbolic_opset15(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$onnx$symbolic_opset7(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$onnx$symbolic_opset8(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$onnx$symbolic_opset9(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$onnx$symbolic_registry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$onnx$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$_functional(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$_multi_tensor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$_multi_tensor$_functional(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$_multi_tensor$adadelta(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$_multi_tensor$adagrad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$_multi_tensor$adam(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$_multi_tensor$adamax(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$_multi_tensor$adamw(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$_multi_tensor$asgd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$_multi_tensor$nadam(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$_multi_tensor$radam(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$_multi_tensor$rmsprop(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$_multi_tensor$rprop(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$_multi_tensor$sgd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$adadelta(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$adagrad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$adam(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$adamax(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$adamw(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$asgd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$lbfgs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$lr_scheduler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$nadam(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$optimizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$radam(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$rmsprop(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$rprop(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$sgd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$sparse_adam(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$optim$swa_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$overrides(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$package(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$package$_digraph(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$package$_directory_reader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$package$_importlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$package$_mangling(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$package$_package_pickler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$package$_package_unpickler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$package$_stdlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$package$analyze(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$package$analyze$is_from_package(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$package$analyze$trace_dependencies(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$package$file_structure_representation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$package$find_file_dependencies(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$package$glob_group(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$package$importer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$package$package_exporter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$package$package_importer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$profiler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$profiler$profiler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$quantization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$quantization$fake_quantize(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$quantization$fuse_modules(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$quantization$fuser_method_mappings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$quantization$observer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$quantization$qconfig(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$quantization$quant_type(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$quantization$quantization_mappings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$quantization$quantize(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$quantization$quantize_jit(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$quantization$stubs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$quasirandom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$random(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$return_types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$serialization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$sparse(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$special(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$storage(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$testing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$testing$_comparison(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$testing$_core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$testing$_creation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$testing$_deprecated(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$testing$_legacy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$torch_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$_crash_handler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$_pytree(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$backcompat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$checkpoint(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$_decorator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$_typing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$_utils$collate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$_utils$fetch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$_utils$pin_memory(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$_utils$signal_handling(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$_utils$worker(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$backward_compatibility(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$communication(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$communication$eventloop(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$communication$iter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$communication$map(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$communication$messages(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$communication$protocol(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$communication$queue(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$dataloader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$dataloader_experimental(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$dataframe(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$dataframe$dataframe_wrapper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$dataframe$dataframes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$dataframe$datapipes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$dataframe$structures(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$iter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$iter$callable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$iter$combinatorics(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$iter$combining(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$iter$filelister(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$iter$fileopener(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$iter$grouping(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$iter$routeddecoder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$iter$selecting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$iter$streamreader(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$iter$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$map(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$map$callable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$map$combinatorics(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$map$combining(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$map$grouping(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$map$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$utils$common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$datapipes$utils$decoder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$dataset(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$distributed(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$graph(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$graph_settings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$data$sampler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$dlpack(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$hooks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$model_zoo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$utils$throughput_benchmark(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torch$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$_internally_replaced_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$_optical_flow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$caltech(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$celeba(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$cifar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$cityscapes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$clevr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$coco(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$country211(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$dtd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$eurosat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$fakedata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$fer2013(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$fgvc_aircraft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$flickr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$flowers102(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$folder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$food101(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$gtsrb(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$hmdb51(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$imagenet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$inaturalist(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$kinetics(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$kitti(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$lfw(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$lsun(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$mnist(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$omniglot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$oxford_iiit_pet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$pcam(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$phototour(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$places365(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$rendered_sst2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$sbd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$sbu(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$semeion(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$stanford_cars(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$stl10(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$sun397(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$svhn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$ucf101(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$usps(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$video_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$vision(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$voc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$datasets$widerface(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$extension(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$io(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$io$_load_gpu_decoder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$io$_video_opt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$io$image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$io$video(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$alexnet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$convnext(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$densenet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$detection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$detection$_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$detection$anchor_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$detection$backbone_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$detection$faster_rcnn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$detection$fcos(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$detection$generalized_rcnn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$detection$image_list(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$detection$keypoint_rcnn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$detection$mask_rcnn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$detection$retinanet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$detection$roi_heads(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$detection$rpn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$detection$ssd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$detection$ssdlite(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$detection$transform(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$efficientnet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$feature_extraction(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$googlenet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$inception(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$mnasnet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$mobilenet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$mobilenetv2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$mobilenetv3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$optical_flow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$optical_flow$_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$optical_flow$raft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$quantization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$quantization$googlenet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$quantization$inception(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$quantization$mobilenet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$quantization$mobilenetv2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$quantization$mobilenetv3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$quantization$resnet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$quantization$shufflenetv2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$quantization$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$regnet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$resnet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$segmentation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$segmentation$_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$segmentation$deeplabv3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$segmentation$fcn(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$segmentation$lraspp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$shufflenetv2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$squeezenet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$vgg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$video(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$video$resnet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$models$vision_transformer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$ops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$ops$_box_convert(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$ops$_register_onnx_ops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$ops$_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$ops$boxes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$ops$deform_conv(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$ops$feature_pyramid_network(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$ops$focal_loss(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$ops$giou_loss(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$ops$misc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$ops$poolers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$ops$ps_roi_align(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$ops$ps_roi_pool(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$ops$roi_align(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$ops$roi_pool(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$ops$stochastic_depth(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$transforms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$transforms$autoaugment(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$transforms$functional(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$transforms$functional_pil(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$transforms$functional_tensor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$transforms$transforms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_torchvision$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$_dist_ver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$_monitor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$_tqdm_pandas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$asyncio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$auto(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$autonotebook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$cli(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$gui(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$std(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_txtInfo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_typing_extensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_base_connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_collections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_request_methods(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connectionpool(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$fields(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$filepost(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$poolmanager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$proxy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$retry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssl_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssl_match_hostname(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssltransport(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$timeout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$url(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$wait(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$biffh(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$book(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$compdoc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$formatting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$formula(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$info(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$sheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$timemachine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$xldate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlrd$xlsx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlutils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlutils$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlutils$copy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlutils$display(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlutils$filter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlutils$margins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwt$BIFFRecords(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwt$Bitmap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwt$Cell(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwt$Column(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwt$CompoundDoc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwt$ExcelFormula(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwt$ExcelFormulaLexer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwt$ExcelFormulaParser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwt$ExcelMagic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwt$Formatting(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwt$Row(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwt$Style(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwt$UnicodeUtils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwt$Utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwt$Workbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwt$Worksheet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwt$antlr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_xlwt$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zipp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zstandard(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zstandard$backend_cffi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"OCR_UI_REAL_v225", modulecode_OCR_UI_REAL_v225, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL", modulecode_PIL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.BlpImagePlugin", modulecode_PIL$BlpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.BmpImagePlugin", modulecode_PIL$BmpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.BufrStubImagePlugin", modulecode_PIL$BufrStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.CurImagePlugin", modulecode_PIL$CurImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.DcxImagePlugin", modulecode_PIL$DcxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.DdsImagePlugin", modulecode_PIL$DdsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.EpsImagePlugin", modulecode_PIL$EpsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.FitsImagePlugin", modulecode_PIL$FitsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.FitsStubImagePlugin", modulecode_PIL$FitsStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.FliImagePlugin", modulecode_PIL$FliImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.FpxImagePlugin", modulecode_PIL$FpxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.FtexImagePlugin", modulecode_PIL$FtexImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.GbrImagePlugin", modulecode_PIL$GbrImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.GifImagePlugin", modulecode_PIL$GifImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.GimpGradientFile", modulecode_PIL$GimpGradientFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.GimpPaletteFile", modulecode_PIL$GimpPaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.GribStubImagePlugin", modulecode_PIL$GribStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.Hdf5StubImagePlugin", modulecode_PIL$Hdf5StubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.IcnsImagePlugin", modulecode_PIL$IcnsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.IcoImagePlugin", modulecode_PIL$IcoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImImagePlugin", modulecode_PIL$ImImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.Image", modulecode_PIL$Image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageChops", modulecode_PIL$ImageChops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageCms", modulecode_PIL$ImageCms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageColor", modulecode_PIL$ImageColor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageDraw", modulecode_PIL$ImageDraw, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageDraw2", modulecode_PIL$ImageDraw2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageEnhance", modulecode_PIL$ImageEnhance, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageFile", modulecode_PIL$ImageFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageFilter", modulecode_PIL$ImageFilter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageFont", modulecode_PIL$ImageFont, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageGrab", modulecode_PIL$ImageGrab, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageMode", modulecode_PIL$ImageMode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageOps", modulecode_PIL$ImageOps, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImagePalette", modulecode_PIL$ImagePalette, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImagePath", modulecode_PIL$ImagePath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageQt", modulecode_PIL$ImageQt, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageSequence", modulecode_PIL$ImageSequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageShow", modulecode_PIL$ImageShow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageStat", modulecode_PIL$ImageStat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageTk", modulecode_PIL$ImageTk, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImageWin", modulecode_PIL$ImageWin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.ImtImagePlugin", modulecode_PIL$ImtImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.IptcImagePlugin", modulecode_PIL$IptcImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.Jpeg2KImagePlugin", modulecode_PIL$Jpeg2KImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.JpegImagePlugin", modulecode_PIL$JpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.JpegPresets", modulecode_PIL$JpegPresets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.McIdasImagePlugin", modulecode_PIL$McIdasImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.MicImagePlugin", modulecode_PIL$MicImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.MpegImagePlugin", modulecode_PIL$MpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.MpoImagePlugin", modulecode_PIL$MpoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.MspImagePlugin", modulecode_PIL$MspImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PaletteFile", modulecode_PIL$PaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PalmImagePlugin", modulecode_PIL$PalmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PcdImagePlugin", modulecode_PIL$PcdImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PcxImagePlugin", modulecode_PIL$PcxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PdfImagePlugin", modulecode_PIL$PdfImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PdfParser", modulecode_PIL$PdfParser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PixarImagePlugin", modulecode_PIL$PixarImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PngImagePlugin", modulecode_PIL$PngImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PpmImagePlugin", modulecode_PIL$PpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PsdImagePlugin", modulecode_PIL$PsdImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.PyAccess", modulecode_PIL$PyAccess, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.SgiImagePlugin", modulecode_PIL$SgiImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.SpiderImagePlugin", modulecode_PIL$SpiderImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.SunImagePlugin", modulecode_PIL$SunImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.TgaImagePlugin", modulecode_PIL$TgaImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.TiffImagePlugin", modulecode_PIL$TiffImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.TiffTags", modulecode_PIL$TiffTags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.WebPImagePlugin", modulecode_PIL$WebPImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.WmfImagePlugin", modulecode_PIL$WmfImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.XVThumbImagePlugin", modulecode_PIL$XVThumbImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.XbmImagePlugin", modulecode_PIL$XbmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.XpmImagePlugin", modulecode_PIL$XpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._binary", modulecode_PIL$_binary, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._deprecate", modulecode_PIL$_deprecate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._imaging", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._imagingcms", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._imagingft", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._imagingtk", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._tkinter_finder", modulecode_PIL$_tkinter_finder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._util", modulecode_PIL$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._version", modulecode_PIL$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL._webp", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PIL.features", modulecode_PIL$features, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PyQt5", modulecode_PyQt5, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PyQt5.QtCore", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PyQt5.QtGui", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PyQt5.QtWidgets", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"PyQt5.sip", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__parents_main__", modulecode___parents_main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_asyncio", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_brotli", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_bz2", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_cffi_backend", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_ctypes", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_decimal", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_elementtree", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_hashlib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_lzma", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_multiprocessing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_overlapped", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_queue", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_socket", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_sqlite3", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_ssl", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_tkinter", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"argparse", NULL, 0, 61931, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"astunparse", modulecode_astunparse, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"astunparse.printer", modulecode_astunparse$printer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"astunparse.unparser", modulecode_astunparse$unparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio", NULL, 1, 628, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.base_events", NULL, 2, 48309, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.base_futures", NULL, 3, 2049, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.base_subprocess", NULL, 4, 9138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.base_tasks", NULL, 5, 1813, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.constants", NULL, 6, 538, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.coroutines", NULL, 7, 6325, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.events", NULL, 8, 27837, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.format_helpers", NULL, 9, 2264, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.futures", NULL, 10, 10764, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.locks", NULL, 11, 15860, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.log", NULL, 12, 187, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.proactor_events", NULL, 13, 20035, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.protocols", NULL, 14, 8675, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.queues", NULL, 15, 8120, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.runners", NULL, 16, 1889, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.selector_events", NULL, 17, 28401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.sslproto", NULL, 18, 21206, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.streams", NULL, 19, 20235, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.subprocess", NULL, 20, 6699, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.tasks", NULL, 21, 22266, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.transports", NULL, 22, 12158, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.windows_events", NULL, 23, 23015, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.windows_utils", NULL, 24, 4348, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bdb", NULL, 25, 24594, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"brotli", modulecode_brotli, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bs4", modulecode_bs4, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bs4.builder", modulecode_bs4$builder, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bs4.builder._html5lib", modulecode_bs4$builder$_html5lib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bs4.builder._htmlparser", modulecode_bs4$builder$_htmlparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bs4.builder._lxml", modulecode_bs4$builder$_lxml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bs4.dammit", modulecode_bs4$dammit, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bs4.element", modulecode_bs4$element, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bs4.formatter", modulecode_bs4$formatter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"certifi", modulecode_certifi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"certifi.core", modulecode_certifi$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi", modulecode_cffi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.api", modulecode_cffi$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.commontypes", modulecode_cffi$commontypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.cparser", modulecode_cffi$cparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.error", modulecode_cffi$error, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.ffiplatform", modulecode_cffi$ffiplatform, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.lock", modulecode_cffi$lock, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.model", modulecode_cffi$model, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.pkgconfig", modulecode_cffi$pkgconfig, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.vengine_cpy", modulecode_cffi$vengine_cpy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.vengine_gen", modulecode_cffi$vengine_gen, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cffi.verifier", modulecode_cffi$verifier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet", modulecode_chardet, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.big5freq", modulecode_chardet$big5freq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.big5prober", modulecode_chardet$big5prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.chardistribution", modulecode_chardet$chardistribution, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.charsetgroupprober", modulecode_chardet$charsetgroupprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.charsetprober", modulecode_chardet$charsetprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.codingstatemachine", modulecode_chardet$codingstatemachine, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.codingstatemachinedict", modulecode_chardet$codingstatemachinedict, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.cp949prober", modulecode_chardet$cp949prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.enums", modulecode_chardet$enums, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.escprober", modulecode_chardet$escprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.escsm", modulecode_chardet$escsm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.eucjpprober", modulecode_chardet$eucjpprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.euckrfreq", modulecode_chardet$euckrfreq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.euckrprober", modulecode_chardet$euckrprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.euctwfreq", modulecode_chardet$euctwfreq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.euctwprober", modulecode_chardet$euctwprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.gb2312freq", modulecode_chardet$gb2312freq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.gb2312prober", modulecode_chardet$gb2312prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.hebrewprober", modulecode_chardet$hebrewprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.jisfreq", modulecode_chardet$jisfreq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.johabfreq", modulecode_chardet$johabfreq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.johabprober", modulecode_chardet$johabprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.jpcntx", modulecode_chardet$jpcntx, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.langbulgarianmodel", modulecode_chardet$langbulgarianmodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.langgreekmodel", modulecode_chardet$langgreekmodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.langhebrewmodel", modulecode_chardet$langhebrewmodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.langrussianmodel", modulecode_chardet$langrussianmodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.langthaimodel", modulecode_chardet$langthaimodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.langturkishmodel", modulecode_chardet$langturkishmodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.latin1prober", modulecode_chardet$latin1prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.macromanprober", modulecode_chardet$macromanprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.mbcharsetprober", modulecode_chardet$mbcharsetprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.mbcsgroupprober", modulecode_chardet$mbcsgroupprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.mbcssm", modulecode_chardet$mbcssm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.resultdict", modulecode_chardet$resultdict, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.sbcharsetprober", modulecode_chardet$sbcharsetprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.sbcsgroupprober", modulecode_chardet$sbcsgroupprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.sjisprober", modulecode_chardet$sjisprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.universaldetector", modulecode_chardet$universaldetector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.utf1632prober", modulecode_chardet$utf1632prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.utf8prober", modulecode_chardet$utf8prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chardet.version", modulecode_chardet$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"charset_normalizer", modulecode_charset_normalizer, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"charset_normalizer.api", modulecode_charset_normalizer$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"charset_normalizer.assets", modulecode_charset_normalizer$assets, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"charset_normalizer.cd", modulecode_charset_normalizer$cd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"charset_normalizer.constant", modulecode_charset_normalizer$constant, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"charset_normalizer.legacy", modulecode_charset_normalizer$legacy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"charset_normalizer.md", modulecode_charset_normalizer$md, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"charset_normalizer.models", modulecode_charset_normalizer$models, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"charset_normalizer.utils", modulecode_charset_normalizer$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"charset_normalizer.version", modulecode_charset_normalizer$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cloudpickle", modulecode_cloudpickle, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cloudpickle.cloudpickle", modulecode_cloudpickle$cloudpickle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cloudpickle.cloudpickle_fast", modulecode_cloudpickle$cloudpickle_fast, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cloudpickle.compat", modulecode_cloudpickle$compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"colorama", modulecode_colorama, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"colorama.ansi", modulecode_colorama$ansi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"colorama.ansitowin32", modulecode_colorama$ansitowin32, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"colorama.initialise", modulecode_colorama$initialise, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"colorama.win32", modulecode_colorama$win32, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"colorama.winterm", modulecode_colorama$winterm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent", NULL, 26, 84, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent.futures", NULL, 27, 1024, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent.futures._base", NULL, 28, 21131, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent.futures.process", NULL, 29, 19940, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent.futures.thread", NULL, 30, 5380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cssselect", modulecode_cssselect, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cssselect.parser", modulecode_cssselect$parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cssselect.xpath", modulecode_cssselect$xpath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cycler", modulecode_cycler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dataClass", modulecode_dataClass, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil", modulecode_dateutil, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil._common", modulecode_dateutil$_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil._version", modulecode_dateutil$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.easter", modulecode_dateutil$easter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.parser", modulecode_dateutil$parser, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.parser._parser", modulecode_dateutil$parser$_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.parser.isoparser", modulecode_dateutil$parser$isoparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.relativedelta", modulecode_dateutil$relativedelta, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.rrule", modulecode_dateutil$rrule, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.tz", modulecode_dateutil$tz, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.tz._common", modulecode_dateutil$tz$_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.tz._factories", modulecode_dateutil$tz$_factories, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.tz.tz", modulecode_dateutil$tz$tz, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.tz.win", modulecode_dateutil$tz$win, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dateutil.zoneinfo", modulecode_dateutil$zoneinfo, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dbm", NULL, 31, 4104, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dbm.dumb", NULL, 32, 8347, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dbm.ndbm", NULL, 33, 163, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"defusedxml", modulecode_defusedxml, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"defusedxml.ElementTree", modulecode_defusedxml$ElementTree, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"defusedxml.cElementTree", modulecode_defusedxml$cElementTree, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"defusedxml.common", modulecode_defusedxml$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"defusedxml.expatbuilder", modulecode_defusedxml$expatbuilder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"defusedxml.expatreader", modulecode_defusedxml$expatreader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"defusedxml.minidom", modulecode_defusedxml$minidom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"defusedxml.pulldom", modulecode_defusedxml$pulldom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"defusedxml.sax", modulecode_defusedxml$sax, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"defusedxml.xmlrpc", modulecode_defusedxml$xmlrpc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill", modulecode_dill, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill._dill", modulecode_dill$_dill, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill._objects", modulecode_dill$_objects, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill.detect", modulecode_dill$detect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill.info", modulecode_dill$info, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill.objtypes", modulecode_dill$objtypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill.pointers", modulecode_dill$pointers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill.settings", modulecode_dill$settings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill.source", modulecode_dill$source, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dill.temp", modulecode_dill$temp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email", NULL, 34, 1629, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email._encoded_words", NULL, 35, 5555, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email._header_value_parser", NULL, 36, 76771, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email._parseaddr", NULL, 37, 12352, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email._policybase", NULL, 38, 14797, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.base64mime", NULL, 39, 3182, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.charset", NULL, 40, 11476, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.contentmanager", NULL, 41, 7242, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.encoders", NULL, 42, 1611, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.errors", NULL, 43, 6138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.feedparser", NULL, 44, 10576, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.generator", NULL, 45, 12447, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.header", NULL, 46, 16333, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.headerregistry", NULL, 47, 21244, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.iterators", NULL, 48, 1879, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.message", NULL, 49, 37941, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.parser", NULL, 50, 5694, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.policy", NULL, 51, 9602, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.quoprimime", NULL, 52, 7611, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.utils", NULL, 53, 9414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"et_xmlfile", modulecode_et_xmlfile, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"et_xmlfile.xmlfile", modulecode_et_xmlfile$xmlfile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"feiShuRobot", modulecode_feiShuRobot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fsspec", modulecode_fsspec, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fsspec._version", modulecode_fsspec$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fsspec.asyn", modulecode_fsspec$asyn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fsspec.caching", modulecode_fsspec$caching, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fsspec.callbacks", modulecode_fsspec$callbacks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fsspec.compression", modulecode_fsspec$compression, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fsspec.config", modulecode_fsspec$config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fsspec.core", modulecode_fsspec$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fsspec.dircache", modulecode_fsspec$dircache, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fsspec.exceptions", modulecode_fsspec$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fsspec.implementations", modulecode_fsspec$implementations, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fsspec.implementations.local", modulecode_fsspec$implementations$local, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fsspec.mapping", modulecode_fsspec$mapping, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fsspec.registry", modulecode_fsspec$registry, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fsspec.spec", modulecode_fsspec$spec, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fsspec.transaction", modulecode_fsspec$transaction, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fsspec.utils", modulecode_fsspec$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"funcs", modulecode_funcs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"getAreaTuple", modulecode_getAreaTuple, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"greenlet", modulecode_greenlet, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"greenlet._greenlet", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py", modulecode_h5py, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py._conv", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py._errors", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py._hl", modulecode_h5py$_hl, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py._hl.attrs", modulecode_h5py$_hl$attrs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py._hl.base", modulecode_h5py$_hl$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py._hl.compat", modulecode_h5py$_hl$compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py._hl.dataset", modulecode_h5py$_hl$dataset, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py._hl.datatype", modulecode_h5py$_hl$datatype, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py._hl.dims", modulecode_h5py$_hl$dims, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py._hl.files", modulecode_h5py$_hl$files, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py._hl.filters", modulecode_h5py$_hl$filters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py._hl.group", modulecode_h5py$_hl$group, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py._hl.selections", modulecode_h5py$_hl$selections, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py._hl.selections2", modulecode_h5py$_hl$selections2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py._hl.vds", modulecode_h5py$_hl$vds, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py._objects", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py._proxy", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py._selector", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py.defs", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py.h5", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py.h5a", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py.h5ac", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py.h5d", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py.h5ds", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py.h5f", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py.h5fd", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py.h5g", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py.h5i", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py.h5l", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py.h5o", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py.h5p", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py.h5pl", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py.h5py_warnings", modulecode_h5py$h5py_warnings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py.h5r", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py.h5s", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py.h5t", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py.h5z", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py.utils", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"h5py.version", modulecode_h5py$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"http", NULL, 54, 5860, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"http.client", NULL, 55, 34597, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"http.cookiejar", NULL, 56, 53580, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"http.cookies", NULL, 57, 15191, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"http.server", NULL, 58, 33314, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"idna", modulecode_idna, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"idna.core", modulecode_idna$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"idna.idnadata", modulecode_idna$idnadata, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"idna.intranges", modulecode_idna$intranges, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"idna.package_data", modulecode_idna$package_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"idna.uts46data", modulecode_idna$uts46data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib_metadata", NULL, 59, 37891, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib_metadata._adapters", NULL, 60, 2294, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib_metadata._collections", NULL, 61, 1451, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib_metadata._compat", NULL, 62, 1917, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib_metadata._functools", NULL, 63, 3034, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib_metadata._itertools", NULL, 64, 1934, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib_metadata._meta", NULL, 65, 2267, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib_metadata._text", NULL, 66, 2989, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib_resources", modulecode_importlib_resources, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib_resources._adapters", modulecode_importlib_resources$_adapters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib_resources._common", modulecode_importlib_resources$_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib_resources._compat", modulecode_importlib_resources$_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib_resources._itertools", modulecode_importlib_resources$_itertools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib_resources._legacy", modulecode_importlib_resources$_legacy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib_resources.abc", modulecode_importlib_resources$abc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib_resources.readers", modulecode_importlib_resources$readers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jdcal", modulecode_jdcal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2", modulecode_jinja2, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2._identifier", modulecode_jinja2$_identifier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.async_utils", modulecode_jinja2$async_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.bccache", modulecode_jinja2$bccache, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.compiler", modulecode_jinja2$compiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.constants", modulecode_jinja2$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.debug", modulecode_jinja2$debug, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.defaults", modulecode_jinja2$defaults, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.environment", modulecode_jinja2$environment, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.exceptions", modulecode_jinja2$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.filters", modulecode_jinja2$filters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.idtracking", modulecode_jinja2$idtracking, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.lexer", modulecode_jinja2$lexer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.loaders", modulecode_jinja2$loaders, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.nodes", modulecode_jinja2$nodes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.optimizer", modulecode_jinja2$optimizer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.parser", modulecode_jinja2$parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.runtime", modulecode_jinja2$runtime, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.tests", modulecode_jinja2$tests, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.utils", modulecode_jinja2$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"jinja2.visitor", modulecode_jinja2$visitor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"kiwisolver", modulecode_kiwisolver, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"kiwisolver._cext", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"lmdb", modulecode_lmdb, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"lmdb._config", modulecode_lmdb$_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"lmdb.cffi", modulecode_lmdb$cffi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"lmdb.cpython", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"lxml", modulecode_lxml, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"lxml._elementpath", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"lxml.builder", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"lxml.cssselect", modulecode_lxml$cssselect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"lxml.etree", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"lxml.html", modulecode_lxml$html, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"lxml.html._setmixin", modulecode_lxml$html$_setmixin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"lxml.html.defs", modulecode_lxml$html$defs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"lxml.objectify", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"lxml.sax", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"markupsafe", modulecode_markupsafe, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"markupsafe._native", modulecode_markupsafe$_native, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"markupsafe._speedups", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib", modulecode_matplotlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib._api", modulecode_matplotlib$_api, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib._api.deprecation", modulecode_matplotlib$_api$deprecation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib._blocking_input", modulecode_matplotlib$_blocking_input, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib._c_internal_utils", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib._cm", modulecode_matplotlib$_cm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib._cm_listed", modulecode_matplotlib$_cm_listed, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib._color_data", modulecode_matplotlib$_color_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib._constrained_layout", modulecode_matplotlib$_constrained_layout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib._contour", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib._enums", modulecode_matplotlib$_enums, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib._image", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib._layoutgrid", modulecode_matplotlib$_layoutgrid, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib._mathtext", modulecode_matplotlib$_mathtext, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib._mathtext_data", modulecode_matplotlib$_mathtext_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib._path", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib._pylab_helpers", modulecode_matplotlib$_pylab_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib._qhull", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib._text_helpers", modulecode_matplotlib$_text_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib._tri", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib._version", modulecode_matplotlib$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.afm", modulecode_matplotlib$afm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.artist", modulecode_matplotlib$artist, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.axes", modulecode_matplotlib$axes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.axes._axes", modulecode_matplotlib$axes$_axes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.axes._base", modulecode_matplotlib$axes$_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.axes._secondary_axes", modulecode_matplotlib$axes$_secondary_axes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.axes._subplots", modulecode_matplotlib$axes$_subplots, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.axis", modulecode_matplotlib$axis, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.backend_bases", modulecode_matplotlib$backend_bases, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.backend_managers", modulecode_matplotlib$backend_managers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.backend_tools", modulecode_matplotlib$backend_tools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.backends", modulecode_matplotlib$backends, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.backends._backend_agg", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.backends._backend_tk", modulecode_matplotlib$backends$_backend_tk, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.backends._tkagg", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.backends.backend_agg", modulecode_matplotlib$backends$backend_agg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.backends.backend_tkagg", modulecode_matplotlib$backends$backend_tkagg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.bezier", modulecode_matplotlib$bezier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.category", modulecode_matplotlib$category, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.cbook", modulecode_matplotlib$cbook, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.cm", modulecode_matplotlib$cm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.collections", modulecode_matplotlib$collections, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.colorbar", modulecode_matplotlib$colorbar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.colors", modulecode_matplotlib$colors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.container", modulecode_matplotlib$container, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.contour", modulecode_matplotlib$contour, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.dates", modulecode_matplotlib$dates, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.docstring", modulecode_matplotlib$docstring, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.dviread", modulecode_matplotlib$dviread, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.figure", modulecode_matplotlib$figure, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.font_manager", modulecode_matplotlib$font_manager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.fontconfig_pattern", modulecode_matplotlib$fontconfig_pattern, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.ft2font", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.gridspec", modulecode_matplotlib$gridspec, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.hatch", modulecode_matplotlib$hatch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.image", modulecode_matplotlib$image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.legend", modulecode_matplotlib$legend, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.legend_handler", modulecode_matplotlib$legend_handler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.lines", modulecode_matplotlib$lines, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.markers", modulecode_matplotlib$markers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.mathtext", modulecode_matplotlib$mathtext, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.mlab", modulecode_matplotlib$mlab, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.offsetbox", modulecode_matplotlib$offsetbox, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.patches", modulecode_matplotlib$patches, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.path", modulecode_matplotlib$path, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.patheffects", modulecode_matplotlib$patheffects, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.projections", modulecode_matplotlib$projections, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.projections.geo", modulecode_matplotlib$projections$geo, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.projections.polar", modulecode_matplotlib$projections$polar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.pyplot", modulecode_matplotlib$pyplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.quiver", modulecode_matplotlib$quiver, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.rcsetup", modulecode_matplotlib$rcsetup, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.scale", modulecode_matplotlib$scale, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.spines", modulecode_matplotlib$spines, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.stackplot", modulecode_matplotlib$stackplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.streamplot", modulecode_matplotlib$streamplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.style", modulecode_matplotlib$style, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.style.core", modulecode_matplotlib$style$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.table", modulecode_matplotlib$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.texmanager", modulecode_matplotlib$texmanager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.text", modulecode_matplotlib$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.textpath", modulecode_matplotlib$textpath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.ticker", modulecode_matplotlib$ticker, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.tight_bbox", modulecode_matplotlib$tight_bbox, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.tight_layout", modulecode_matplotlib$tight_layout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.transforms", modulecode_matplotlib$transforms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.tri", modulecode_matplotlib$tri, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.tri.triangulation", modulecode_matplotlib$tri$triangulation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.tri.tricontour", modulecode_matplotlib$tri$tricontour, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.tri.trifinder", modulecode_matplotlib$tri$trifinder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.tri.triinterpolate", modulecode_matplotlib$tri$triinterpolate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.tri.tripcolor", modulecode_matplotlib$tri$tripcolor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.tri.triplot", modulecode_matplotlib$tri$triplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.tri.trirefine", modulecode_matplotlib$tri$trirefine, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.tri.tritools", modulecode_matplotlib$tri$tritools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.units", modulecode_matplotlib$units, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"matplotlib.widgets", modulecode_matplotlib$widgets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"mpl_toolkits", modulecode_mpl_toolkits, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"mpl_toolkits.mplot3d", modulecode_mpl_toolkits$mplot3d, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"mpl_toolkits.mplot3d.art3d", modulecode_mpl_toolkits$mplot3d$art3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"mpl_toolkits.mplot3d.axes3d", modulecode_mpl_toolkits$mplot3d$axes3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"mpl_toolkits.mplot3d.axis3d", modulecode_mpl_toolkits$mplot3d$axis3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"mpl_toolkits.mplot3d.proj3d", modulecode_mpl_toolkits$mplot3d$proj3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing", NULL, 67, 465, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing-postLoad", modulecode_multiprocessing$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing-preLoad", modulecode_multiprocessing$$45$preLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.connection", NULL, 68, 24879, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.context", NULL, 69, 13060, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.dummy", NULL, 70, 3743, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.dummy.connection", NULL, 71, 2460, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.forkserver", NULL, 72, 7711, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.heap", NULL, 73, 6371, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.managers", NULL, 74, 34312, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.pool", NULL, 75, 21183, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.popen_spawn_win32", NULL, 76, 3379, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.process", NULL, 77, 9373, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.queues", NULL, 78, 9384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.reduction", NULL, 79, 7965, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.resource_sharer", NULL, 80, 5151, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.semaphore_tracker", NULL, 81, 3687, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.sharedctypes", NULL, 82, 6864, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.spawn", NULL, 83, 6415, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.synchronize", NULL, 84, 11130, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.util", NULL, 85, 10079, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"my_logger", modulecode_my_logger, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"my_telnetlib_ck", modulecode_my_telnetlib_ck, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy", modulecode_numpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.__config__", modulecode_numpy$__config__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy._distributor_init", modulecode_numpy$_distributor_init, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy._globals", modulecode_numpy$_globals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy._pytesttester", modulecode_numpy$_pytesttester, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy._version", modulecode_numpy$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.compat", modulecode_numpy$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.compat._inspect", modulecode_numpy$compat$_inspect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.compat.py3k", modulecode_numpy$compat$py3k, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core", modulecode_numpy$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._add_newdocs", modulecode_numpy$core$_add_newdocs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._add_newdocs_scalars", modulecode_numpy$core$_add_newdocs_scalars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._asarray", modulecode_numpy$core$_asarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._dtype", modulecode_numpy$core$_dtype, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._dtype_ctypes", modulecode_numpy$core$_dtype_ctypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._exceptions", modulecode_numpy$core$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._internal", modulecode_numpy$core$_internal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._methods", modulecode_numpy$core$_methods, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._multiarray_tests", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._multiarray_umath", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._string_helpers", modulecode_numpy$core$_string_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._type_aliases", modulecode_numpy$core$_type_aliases, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core._ufunc_config", modulecode_numpy$core$_ufunc_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.arrayprint", modulecode_numpy$core$arrayprint, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.defchararray", modulecode_numpy$core$defchararray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.einsumfunc", modulecode_numpy$core$einsumfunc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.fromnumeric", modulecode_numpy$core$fromnumeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.function_base", modulecode_numpy$core$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.getlimits", modulecode_numpy$core$getlimits, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.machar", modulecode_numpy$core$machar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.memmap", modulecode_numpy$core$memmap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.multiarray", modulecode_numpy$core$multiarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.numeric", modulecode_numpy$core$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.numerictypes", modulecode_numpy$core$numerictypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.overrides", modulecode_numpy$core$overrides, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.records", modulecode_numpy$core$records, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.shape_base", modulecode_numpy$core$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.core.umath", modulecode_numpy$core$umath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.ctypeslib", modulecode_numpy$ctypeslib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.fft", modulecode_numpy$fft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.fft._pocketfft", modulecode_numpy$fft$_pocketfft, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.fft._pocketfft_internal", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.fft.helper", modulecode_numpy$fft$helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib", modulecode_numpy$lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib._datasource", modulecode_numpy$lib$_datasource, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib._iotools", modulecode_numpy$lib$_iotools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib._version", modulecode_numpy$lib$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.arraypad", modulecode_numpy$lib$arraypad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.arraysetops", modulecode_numpy$lib$arraysetops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.arrayterator", modulecode_numpy$lib$arrayterator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.format", modulecode_numpy$lib$format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.function_base", modulecode_numpy$lib$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.histograms", modulecode_numpy$lib$histograms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.index_tricks", modulecode_numpy$lib$index_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.mixins", modulecode_numpy$lib$mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.nanfunctions", modulecode_numpy$lib$nanfunctions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.npyio", modulecode_numpy$lib$npyio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.polynomial", modulecode_numpy$lib$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.scimath", modulecode_numpy$lib$scimath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.shape_base", modulecode_numpy$lib$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.stride_tricks", modulecode_numpy$lib$stride_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.twodim_base", modulecode_numpy$lib$twodim_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.type_check", modulecode_numpy$lib$type_check, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.ufunclike", modulecode_numpy$lib$ufunclike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.lib.utils", modulecode_numpy$lib$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.linalg", modulecode_numpy$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.linalg._umath_linalg", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.linalg.lapack_lite", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.linalg.linalg", modulecode_numpy$linalg$linalg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.ma", modulecode_numpy$ma, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.ma.core", modulecode_numpy$ma$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.ma.extras", modulecode_numpy$ma$extras, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.ma.mrecords", modulecode_numpy$ma$mrecords, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.matrixlib", modulecode_numpy$matrixlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.matrixlib.defmatrix", modulecode_numpy$matrixlib$defmatrix, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.polynomial", modulecode_numpy$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.polynomial._polybase", modulecode_numpy$polynomial$_polybase, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.polynomial.chebyshev", modulecode_numpy$polynomial$chebyshev, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.polynomial.hermite", modulecode_numpy$polynomial$hermite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.polynomial.hermite_e", modulecode_numpy$polynomial$hermite_e, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.polynomial.laguerre", modulecode_numpy$polynomial$laguerre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.polynomial.legendre", modulecode_numpy$polynomial$legendre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.polynomial.polynomial", modulecode_numpy$polynomial$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.polynomial.polyutils", modulecode_numpy$polynomial$polyutils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random", modulecode_numpy$random, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random._bounded_integers", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random._common", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random._generator", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random._mt19937", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random._pcg64", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random._philox", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random._pickle", modulecode_numpy$random$_pickle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random._sfc64", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random.bit_generator", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.random.mtrand", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.testing", NULL, 86, 2041, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.typing", modulecode_numpy$typing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.typing._add_docstring", modulecode_numpy$typing$_add_docstring, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.typing._array_like", modulecode_numpy$typing$_array_like, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.typing._char_codes", modulecode_numpy$typing$_char_codes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.typing._dtype_like", modulecode_numpy$typing$_dtype_like, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.typing._generic_alias", modulecode_numpy$typing$_generic_alias, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.typing._nbit", modulecode_numpy$typing$_nbit, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.typing._scalars", modulecode_numpy$typing$_scalars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.typing._shape", modulecode_numpy$typing$_shape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numpy.version", modulecode_numpy$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ocrFunc", modulecode_ocrFunc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"odf", modulecode_odf, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"odf.attrconverters", modulecode_odf$attrconverters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"odf.config", modulecode_odf$config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"odf.draw", modulecode_odf$draw, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"odf.element", modulecode_odf$element, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"odf.grammar", modulecode_odf$grammar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"odf.load", modulecode_odf$load, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"odf.manifest", modulecode_odf$manifest, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"odf.meta", modulecode_odf$meta, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"odf.namespaces", modulecode_odf$namespaces, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"odf.odfmanifest", modulecode_odf$odfmanifest, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"odf.office", modulecode_odf$office, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"odf.opendocument", modulecode_odf$opendocument, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"odf.style", modulecode_odf$style, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"odf.table", modulecode_odf$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"odf.text", modulecode_odf$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl", modulecode_openpyxl, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl._constants", modulecode_openpyxl$_constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.cell", modulecode_openpyxl$cell, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.cell._writer", modulecode_openpyxl$cell$_writer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.cell.cell", modulecode_openpyxl$cell$cell, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.cell.read_only", modulecode_openpyxl$cell$read_only, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.cell.text", modulecode_openpyxl$cell$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart", modulecode_openpyxl$chart, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart._3d", modulecode_openpyxl$chart$_3d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart._chart", modulecode_openpyxl$chart$_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.area_chart", modulecode_openpyxl$chart$area_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.axis", modulecode_openpyxl$chart$axis, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.bar_chart", modulecode_openpyxl$chart$bar_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.bubble_chart", modulecode_openpyxl$chart$bubble_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.chartspace", modulecode_openpyxl$chart$chartspace, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.data_source", modulecode_openpyxl$chart$data_source, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.descriptors", modulecode_openpyxl$chart$descriptors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.error_bar", modulecode_openpyxl$chart$error_bar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.label", modulecode_openpyxl$chart$label, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.layout", modulecode_openpyxl$chart$layout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.legend", modulecode_openpyxl$chart$legend, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.line_chart", modulecode_openpyxl$chart$line_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.marker", modulecode_openpyxl$chart$marker, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.picture", modulecode_openpyxl$chart$picture, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.pie_chart", modulecode_openpyxl$chart$pie_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.pivot", modulecode_openpyxl$chart$pivot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.plotarea", modulecode_openpyxl$chart$plotarea, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.print_settings", modulecode_openpyxl$chart$print_settings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.radar_chart", modulecode_openpyxl$chart$radar_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.reader", modulecode_openpyxl$chart$reader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.reference", modulecode_openpyxl$chart$reference, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.scatter_chart", modulecode_openpyxl$chart$scatter_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.series", modulecode_openpyxl$chart$series, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.series_factory", modulecode_openpyxl$chart$series_factory, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.shapes", modulecode_openpyxl$chart$shapes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.stock_chart", modulecode_openpyxl$chart$stock_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.surface_chart", modulecode_openpyxl$chart$surface_chart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.text", modulecode_openpyxl$chart$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.title", modulecode_openpyxl$chart$title, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.trendline", modulecode_openpyxl$chart$trendline, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chart.updown_bars", modulecode_openpyxl$chart$updown_bars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chartsheet", modulecode_openpyxl$chartsheet, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chartsheet.chartsheet", modulecode_openpyxl$chartsheet$chartsheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chartsheet.custom", modulecode_openpyxl$chartsheet$custom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chartsheet.properties", modulecode_openpyxl$chartsheet$properties, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chartsheet.protection", modulecode_openpyxl$chartsheet$protection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chartsheet.publish", modulecode_openpyxl$chartsheet$publish, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chartsheet.relation", modulecode_openpyxl$chartsheet$relation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.chartsheet.views", modulecode_openpyxl$chartsheet$views, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.comments", modulecode_openpyxl$comments, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.comments.author", modulecode_openpyxl$comments$author, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.comments.comment_sheet", modulecode_openpyxl$comments$comment_sheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.comments.comments", modulecode_openpyxl$comments$comments, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.comments.shape_writer", modulecode_openpyxl$comments$shape_writer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.compat", modulecode_openpyxl$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.compat.numbers", modulecode_openpyxl$compat$numbers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.compat.strings", modulecode_openpyxl$compat$strings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.descriptors", modulecode_openpyxl$descriptors, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.descriptors.base", modulecode_openpyxl$descriptors$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.descriptors.excel", modulecode_openpyxl$descriptors$excel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.descriptors.namespace", modulecode_openpyxl$descriptors$namespace, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.descriptors.nested", modulecode_openpyxl$descriptors$nested, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.descriptors.sequence", modulecode_openpyxl$descriptors$sequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.descriptors.serialisable", modulecode_openpyxl$descriptors$serialisable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.drawing", modulecode_openpyxl$drawing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.drawing.colors", modulecode_openpyxl$drawing$colors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.drawing.connector", modulecode_openpyxl$drawing$connector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.drawing.drawing", modulecode_openpyxl$drawing$drawing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.drawing.effect", modulecode_openpyxl$drawing$effect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.drawing.fill", modulecode_openpyxl$drawing$fill, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.drawing.geometry", modulecode_openpyxl$drawing$geometry, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.drawing.graphic", modulecode_openpyxl$drawing$graphic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.drawing.image", modulecode_openpyxl$drawing$image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.drawing.line", modulecode_openpyxl$drawing$line, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.drawing.picture", modulecode_openpyxl$drawing$picture, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.drawing.properties", modulecode_openpyxl$drawing$properties, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.drawing.relation", modulecode_openpyxl$drawing$relation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.drawing.spreadsheet_drawing", modulecode_openpyxl$drawing$spreadsheet_drawing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.drawing.text", modulecode_openpyxl$drawing$text, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.drawing.xdr", modulecode_openpyxl$drawing$xdr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.formatting", modulecode_openpyxl$formatting, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.formatting.formatting", modulecode_openpyxl$formatting$formatting, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.formatting.rule", modulecode_openpyxl$formatting$rule, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.formula", modulecode_openpyxl$formula, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.formula.tokenizer", modulecode_openpyxl$formula$tokenizer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.formula.translate", modulecode_openpyxl$formula$translate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.packaging", modulecode_openpyxl$packaging, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.packaging.core", modulecode_openpyxl$packaging$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.packaging.extended", modulecode_openpyxl$packaging$extended, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.packaging.manifest", modulecode_openpyxl$packaging$manifest, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.packaging.relationship", modulecode_openpyxl$packaging$relationship, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.packaging.workbook", modulecode_openpyxl$packaging$workbook, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.pivot", modulecode_openpyxl$pivot, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.pivot.cache", modulecode_openpyxl$pivot$cache, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.pivot.fields", modulecode_openpyxl$pivot$fields, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.pivot.record", modulecode_openpyxl$pivot$record, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.pivot.table", modulecode_openpyxl$pivot$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.reader", modulecode_openpyxl$reader, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.reader.drawings", modulecode_openpyxl$reader$drawings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.reader.excel", modulecode_openpyxl$reader$excel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.reader.strings", modulecode_openpyxl$reader$strings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.reader.workbook", modulecode_openpyxl$reader$workbook, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.styles", modulecode_openpyxl$styles, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.styles.alignment", modulecode_openpyxl$styles$alignment, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.styles.borders", modulecode_openpyxl$styles$borders, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.styles.builtins", modulecode_openpyxl$styles$builtins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.styles.cell_style", modulecode_openpyxl$styles$cell_style, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.styles.colors", modulecode_openpyxl$styles$colors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.styles.differential", modulecode_openpyxl$styles$differential, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.styles.fills", modulecode_openpyxl$styles$fills, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.styles.fonts", modulecode_openpyxl$styles$fonts, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.styles.named_styles", modulecode_openpyxl$styles$named_styles, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.styles.numbers", modulecode_openpyxl$styles$numbers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.styles.protection", modulecode_openpyxl$styles$protection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.styles.proxy", modulecode_openpyxl$styles$proxy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.styles.styleable", modulecode_openpyxl$styles$styleable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.styles.stylesheet", modulecode_openpyxl$styles$stylesheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.styles.table", modulecode_openpyxl$styles$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.utils", modulecode_openpyxl$utils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.utils.bound_dictionary", modulecode_openpyxl$utils$bound_dictionary, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.utils.cell", modulecode_openpyxl$utils$cell, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.utils.datetime", modulecode_openpyxl$utils$datetime, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.utils.escape", modulecode_openpyxl$utils$escape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.utils.exceptions", modulecode_openpyxl$utils$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.utils.formulas", modulecode_openpyxl$utils$formulas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.utils.indexed_list", modulecode_openpyxl$utils$indexed_list, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.utils.protection", modulecode_openpyxl$utils$protection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.utils.units", modulecode_openpyxl$utils$units, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.workbook", modulecode_openpyxl$workbook, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.workbook._writer", modulecode_openpyxl$workbook$_writer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.workbook.child", modulecode_openpyxl$workbook$child, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.workbook.defined_name", modulecode_openpyxl$workbook$defined_name, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.workbook.external_link", modulecode_openpyxl$workbook$external_link, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.workbook.external_link.external", modulecode_openpyxl$workbook$external_link$external, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.workbook.external_reference", modulecode_openpyxl$workbook$external_reference, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.workbook.function_group", modulecode_openpyxl$workbook$function_group, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.workbook.properties", modulecode_openpyxl$workbook$properties, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.workbook.protection", modulecode_openpyxl$workbook$protection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.workbook.smart_tags", modulecode_openpyxl$workbook$smart_tags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.workbook.views", modulecode_openpyxl$workbook$views, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.workbook.web", modulecode_openpyxl$workbook$web, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.workbook.workbook", modulecode_openpyxl$workbook$workbook, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet", modulecode_openpyxl$worksheet, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet._read_only", modulecode_openpyxl$worksheet$_read_only, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet._reader", modulecode_openpyxl$worksheet$_reader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet._write_only", modulecode_openpyxl$worksheet$_write_only, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet._writer", modulecode_openpyxl$worksheet$_writer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet.cell_range", modulecode_openpyxl$worksheet$cell_range, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet.copier", modulecode_openpyxl$worksheet$copier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet.datavalidation", modulecode_openpyxl$worksheet$datavalidation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet.dimensions", modulecode_openpyxl$worksheet$dimensions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet.drawing", modulecode_openpyxl$worksheet$drawing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet.filters", modulecode_openpyxl$worksheet$filters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet.header_footer", modulecode_openpyxl$worksheet$header_footer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet.hyperlink", modulecode_openpyxl$worksheet$hyperlink, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet.merge", modulecode_openpyxl$worksheet$merge, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet.page", modulecode_openpyxl$worksheet$page, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet.pagebreak", modulecode_openpyxl$worksheet$pagebreak, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet.properties", modulecode_openpyxl$worksheet$properties, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet.protection", modulecode_openpyxl$worksheet$protection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet.related", modulecode_openpyxl$worksheet$related, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet.scenario", modulecode_openpyxl$worksheet$scenario, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet.table", modulecode_openpyxl$worksheet$table, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet.views", modulecode_openpyxl$worksheet$views, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.worksheet.worksheet", modulecode_openpyxl$worksheet$worksheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.writer", modulecode_openpyxl$writer, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.writer.excel", modulecode_openpyxl$writer$excel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.writer.theme", modulecode_openpyxl$writer$theme, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.xml", modulecode_openpyxl$xml, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.xml.constants", modulecode_openpyxl$xml$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"openpyxl.xml.functions", modulecode_openpyxl$xml$functions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"optparse", NULL, 87, 47840, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"packaging", NULL, 88, 360, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"packaging.__about__", NULL, 89, 513, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"packaging._structures", NULL, 90, 2717, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"packaging.version", NULL, 91, 12998, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas", modulecode_pandas, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._config", modulecode_pandas$_config, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._config.config", modulecode_pandas$_config$config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._config.dates", modulecode_pandas$_config$dates, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._config.display", modulecode_pandas$_config$display, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._config.localization", modulecode_pandas$_config$localization, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs", modulecode_pandas$_libs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.algos", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.arrays", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.groupby", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.hashing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.hashtable", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.index", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.indexing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.internals", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.interval", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.join", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.json", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.lib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.missing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.ops", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.ops_dispatch", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.parsers", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.properties", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.reduction", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.reshape", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.sparse", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs", modulecode_pandas$_libs$tslibs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.base", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.ccalendar", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.conversion", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.dtypes", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.fields", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.nattype", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.np_datetime", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.offsets", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.parsing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.period", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.strptime", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.timedeltas", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.timestamps", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.timezones", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.tzconversion", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.tslibs.vectorized", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.window", modulecode_pandas$_libs$window, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.window.aggregations", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.window.indexers", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._libs.writers", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._typing", modulecode_pandas$_typing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas._version", modulecode_pandas$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.api", modulecode_pandas$api, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.api.extensions", modulecode_pandas$api$extensions, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.api.indexers", modulecode_pandas$api$indexers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.api.types", modulecode_pandas$api$types, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.arrays", modulecode_pandas$arrays, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.compat", modulecode_pandas$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.compat._optional", modulecode_pandas$compat$_optional, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.compat.chainmap", modulecode_pandas$compat$chainmap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.compat.numpy", modulecode_pandas$compat$numpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.compat.numpy.function", modulecode_pandas$compat$numpy$function, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.compat.pickle_compat", modulecode_pandas$compat$pickle_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.compat.pyarrow", modulecode_pandas$compat$pyarrow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core", modulecode_pandas$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.accessor", modulecode_pandas$core$accessor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.aggregation", modulecode_pandas$core$aggregation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.algorithms", modulecode_pandas$core$algorithms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.api", modulecode_pandas$core$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.apply", modulecode_pandas$core$apply, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.array_algos", modulecode_pandas$core$array_algos, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.array_algos.masked_reductions", modulecode_pandas$core$array_algos$masked_reductions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.array_algos.putmask", modulecode_pandas$core$array_algos$putmask, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.array_algos.quantile", modulecode_pandas$core$array_algos$quantile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.array_algos.replace", modulecode_pandas$core$array_algos$replace, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.array_algos.take", modulecode_pandas$core$array_algos$take, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.array_algos.transforms", modulecode_pandas$core$array_algos$transforms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arraylike", modulecode_pandas$core$arraylike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays", modulecode_pandas$core$arrays, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays._arrow_utils", modulecode_pandas$core$arrays$_arrow_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays._mixins", modulecode_pandas$core$arrays$_mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays._ranges", modulecode_pandas$core$arrays$_ranges, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.base", modulecode_pandas$core$arrays$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.boolean", modulecode_pandas$core$arrays$boolean, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.categorical", modulecode_pandas$core$arrays$categorical, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.datetimelike", modulecode_pandas$core$arrays$datetimelike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.datetimes", modulecode_pandas$core$arrays$datetimes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.floating", modulecode_pandas$core$arrays$floating, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.integer", modulecode_pandas$core$arrays$integer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.interval", modulecode_pandas$core$arrays$interval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.masked", modulecode_pandas$core$arrays$masked, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.numeric", modulecode_pandas$core$arrays$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.numpy_", modulecode_pandas$core$arrays$numpy_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.period", modulecode_pandas$core$arrays$period, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.sparse", modulecode_pandas$core$arrays$sparse, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.sparse.accessor", modulecode_pandas$core$arrays$sparse$accessor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.sparse.array", modulecode_pandas$core$arrays$sparse$array, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.sparse.dtype", modulecode_pandas$core$arrays$sparse$dtype, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.sparse.scipy_sparse", modulecode_pandas$core$arrays$sparse$scipy_sparse, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.string_", modulecode_pandas$core$arrays$string_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.string_arrow", modulecode_pandas$core$arrays$string_arrow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.arrays.timedeltas", modulecode_pandas$core$arrays$timedeltas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.base", modulecode_pandas$core$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.common", modulecode_pandas$core$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation", modulecode_pandas$core$computation, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.align", modulecode_pandas$core$computation$align, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.api", modulecode_pandas$core$computation$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.check", modulecode_pandas$core$computation$check, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.common", modulecode_pandas$core$computation$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.engines", modulecode_pandas$core$computation$engines, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.eval", modulecode_pandas$core$computation$eval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.expr", modulecode_pandas$core$computation$expr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.expressions", modulecode_pandas$core$computation$expressions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.ops", modulecode_pandas$core$computation$ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.parsing", modulecode_pandas$core$computation$parsing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.pytables", modulecode_pandas$core$computation$pytables, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.computation.scope", modulecode_pandas$core$computation$scope, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.config_init", modulecode_pandas$core$config_init, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.construction", modulecode_pandas$core$construction, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.describe", modulecode_pandas$core$describe, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.dtypes", modulecode_pandas$core$dtypes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.dtypes.api", modulecode_pandas$core$dtypes$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.dtypes.base", modulecode_pandas$core$dtypes$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.dtypes.cast", modulecode_pandas$core$dtypes$cast, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.dtypes.common", modulecode_pandas$core$dtypes$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.dtypes.concat", modulecode_pandas$core$dtypes$concat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.dtypes.dtypes", modulecode_pandas$core$dtypes$dtypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.dtypes.generic", modulecode_pandas$core$dtypes$generic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.dtypes.inference", modulecode_pandas$core$dtypes$inference, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.dtypes.missing", modulecode_pandas$core$dtypes$missing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.flags", modulecode_pandas$core$flags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.frame", modulecode_pandas$core$frame, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.generic", modulecode_pandas$core$generic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.groupby", modulecode_pandas$core$groupby, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.groupby.base", modulecode_pandas$core$groupby$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.groupby.categorical", modulecode_pandas$core$groupby$categorical, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.groupby.generic", modulecode_pandas$core$groupby$generic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.groupby.groupby", modulecode_pandas$core$groupby$groupby, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.groupby.grouper", modulecode_pandas$core$groupby$grouper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.groupby.numba_", modulecode_pandas$core$groupby$numba_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.groupby.ops", modulecode_pandas$core$groupby$ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexers", modulecode_pandas$core$indexers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes", modulecode_pandas$core$indexes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.accessors", modulecode_pandas$core$indexes$accessors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.api", modulecode_pandas$core$indexes$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.base", modulecode_pandas$core$indexes$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.category", modulecode_pandas$core$indexes$category, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.datetimelike", modulecode_pandas$core$indexes$datetimelike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.datetimes", modulecode_pandas$core$indexes$datetimes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.extension", modulecode_pandas$core$indexes$extension, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.frozen", modulecode_pandas$core$indexes$frozen, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.interval", modulecode_pandas$core$indexes$interval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.multi", modulecode_pandas$core$indexes$multi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.numeric", modulecode_pandas$core$indexes$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.period", modulecode_pandas$core$indexes$period, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.range", modulecode_pandas$core$indexes$range, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexes.timedeltas", modulecode_pandas$core$indexes$timedeltas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.indexing", modulecode_pandas$core$indexing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.internals", modulecode_pandas$core$internals, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.internals.api", modulecode_pandas$core$internals$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.internals.array_manager", modulecode_pandas$core$internals$array_manager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.internals.base", modulecode_pandas$core$internals$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.internals.blocks", modulecode_pandas$core$internals$blocks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.internals.concat", modulecode_pandas$core$internals$concat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.internals.construction", modulecode_pandas$core$internals$construction, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.internals.managers", modulecode_pandas$core$internals$managers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.internals.ops", modulecode_pandas$core$internals$ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.missing", modulecode_pandas$core$missing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.nanops", modulecode_pandas$core$nanops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.ops", modulecode_pandas$core$ops, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.ops.array_ops", modulecode_pandas$core$ops$array_ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.ops.common", modulecode_pandas$core$ops$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.ops.dispatch", modulecode_pandas$core$ops$dispatch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.ops.docstrings", modulecode_pandas$core$ops$docstrings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.ops.invalid", modulecode_pandas$core$ops$invalid, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.ops.mask_ops", modulecode_pandas$core$ops$mask_ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.ops.methods", modulecode_pandas$core$ops$methods, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.ops.missing", modulecode_pandas$core$ops$missing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.resample", modulecode_pandas$core$resample, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.reshape", modulecode_pandas$core$reshape, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.reshape.api", modulecode_pandas$core$reshape$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.reshape.concat", modulecode_pandas$core$reshape$concat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.reshape.melt", modulecode_pandas$core$reshape$melt, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.reshape.merge", modulecode_pandas$core$reshape$merge, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.reshape.pivot", modulecode_pandas$core$reshape$pivot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.reshape.reshape", modulecode_pandas$core$reshape$reshape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.reshape.tile", modulecode_pandas$core$reshape$tile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.reshape.util", modulecode_pandas$core$reshape$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.roperator", modulecode_pandas$core$roperator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.series", modulecode_pandas$core$series, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.shared_docs", modulecode_pandas$core$shared_docs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.sorting", modulecode_pandas$core$sorting, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.strings", modulecode_pandas$core$strings, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.strings.accessor", modulecode_pandas$core$strings$accessor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.strings.base", modulecode_pandas$core$strings$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.strings.object_array", modulecode_pandas$core$strings$object_array, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.tools", modulecode_pandas$core$tools, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.tools.datetimes", modulecode_pandas$core$tools$datetimes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.tools.numeric", modulecode_pandas$core$tools$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.tools.timedeltas", modulecode_pandas$core$tools$timedeltas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.tools.times", modulecode_pandas$core$tools$times, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.util", modulecode_pandas$core$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.util.hashing", modulecode_pandas$core$util$hashing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.util.numba_", modulecode_pandas$core$util$numba_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.window", modulecode_pandas$core$window, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.window.common", modulecode_pandas$core$window$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.window.doc", modulecode_pandas$core$window$doc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.window.ewm", modulecode_pandas$core$window$ewm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.window.expanding", modulecode_pandas$core$window$expanding, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.window.indexers", modulecode_pandas$core$window$indexers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.window.numba_", modulecode_pandas$core$window$numba_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.window.online", modulecode_pandas$core$window$online, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.core.window.rolling", modulecode_pandas$core$window$rolling, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.errors", modulecode_pandas$errors, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io", modulecode_pandas$io, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.api", modulecode_pandas$io$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.clipboard", modulecode_pandas$io$clipboard, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.clipboards", modulecode_pandas$io$clipboards, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.common", modulecode_pandas$io$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.date_converters", modulecode_pandas$io$date_converters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.excel", modulecode_pandas$io$excel, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.excel._base", modulecode_pandas$io$excel$_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.excel._odfreader", modulecode_pandas$io$excel$_odfreader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.excel._odswriter", modulecode_pandas$io$excel$_odswriter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.excel._openpyxl", modulecode_pandas$io$excel$_openpyxl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.excel._pyxlsb", modulecode_pandas$io$excel$_pyxlsb, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.excel._util", modulecode_pandas$io$excel$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.excel._xlrd", modulecode_pandas$io$excel$_xlrd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.excel._xlsxwriter", modulecode_pandas$io$excel$_xlsxwriter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.excel._xlwt", modulecode_pandas$io$excel$_xlwt, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.feather_format", modulecode_pandas$io$feather_format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats", modulecode_pandas$io$formats, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats._color_data", modulecode_pandas$io$formats$_color_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.console", modulecode_pandas$io$formats$console, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.css", modulecode_pandas$io$formats$css, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.csvs", modulecode_pandas$io$formats$csvs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.excel", modulecode_pandas$io$formats$excel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.format", modulecode_pandas$io$formats$format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.html", modulecode_pandas$io$formats$html, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.info", modulecode_pandas$io$formats$info, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.latex", modulecode_pandas$io$formats$latex, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.printing", modulecode_pandas$io$formats$printing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.string", modulecode_pandas$io$formats$string, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.style", modulecode_pandas$io$formats$style, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.style_render", modulecode_pandas$io$formats$style_render, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.formats.xml", modulecode_pandas$io$formats$xml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.gbq", modulecode_pandas$io$gbq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.html", modulecode_pandas$io$html, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.json", modulecode_pandas$io$json, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.json._json", modulecode_pandas$io$json$_json, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.json._normalize", modulecode_pandas$io$json$_normalize, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.json._table_schema", modulecode_pandas$io$json$_table_schema, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.orc", modulecode_pandas$io$orc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.parquet", modulecode_pandas$io$parquet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.parsers", modulecode_pandas$io$parsers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.parsers.base_parser", modulecode_pandas$io$parsers$base_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.parsers.c_parser_wrapper", modulecode_pandas$io$parsers$c_parser_wrapper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.parsers.python_parser", modulecode_pandas$io$parsers$python_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.parsers.readers", modulecode_pandas$io$parsers$readers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.pickle", modulecode_pandas$io$pickle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.pytables", modulecode_pandas$io$pytables, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.sas", modulecode_pandas$io$sas, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.sas._sas", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.sas.sas7bdat", modulecode_pandas$io$sas$sas7bdat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.sas.sas_constants", modulecode_pandas$io$sas$sas_constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.sas.sas_xport", modulecode_pandas$io$sas$sas_xport, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.sas.sasreader", modulecode_pandas$io$sas$sasreader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.spss", modulecode_pandas$io$spss, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.sql", modulecode_pandas$io$sql, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.stata", modulecode_pandas$io$stata, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.io.xml", modulecode_pandas$io$xml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.plotting", modulecode_pandas$plotting, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.plotting._core", modulecode_pandas$plotting$_core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.plotting._misc", modulecode_pandas$plotting$_misc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.tseries", modulecode_pandas$tseries, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.tseries.api", modulecode_pandas$tseries$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.tseries.frequencies", modulecode_pandas$tseries$frequencies, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.tseries.offsets", modulecode_pandas$tseries$offsets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.util", modulecode_pandas$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.util._decorators", modulecode_pandas$util$_decorators, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.util._exceptions", modulecode_pandas$util$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.util._print_versions", modulecode_pandas$util$_print_versions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.util._validators", modulecode_pandas$util$_validators, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pandas.util.version", modulecode_pandas$util$version, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pdb", NULL, 92, 46837, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources", NULL, 93, 98312, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources-postLoad", modulecode_pkg_resources$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor", NULL, 94, 95, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources", NULL, 95, 590, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources._adapters", NULL, 96, 7357, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources._common", NULL, 97, 5406, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources._compat", NULL, 98, 3419, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources._itertools", NULL, 99, 780, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources._legacy", NULL, 100, 4066, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources.abc", NULL, 101, 6712, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.importlib_resources.readers", NULL, 102, 5613, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.jaraco", NULL, 103, 102, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.jaraco.context", NULL, 104, 8190, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.jaraco.functools", NULL, 105, 15447, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.jaraco.text", NULL, 106, 19450, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.more_itertools", NULL, 107, 251, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.more_itertools.more", NULL, 108, 123787, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.more_itertools.recipes", NULL, 109, 24311, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging", NULL, 110, 440, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging._elffile", NULL, 111, 3244, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging._manylinux", NULL, 112, 5541, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging._musllinux", NULL, 113, 3097, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging._parser", NULL, 114, 8218, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging._structures", NULL, 115, 2739, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging._tokenizer", NULL, 116, 5454, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.markers", NULL, 117, 6840, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.requirements", NULL, 118, 2734, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.specifiers", NULL, 119, 30166, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.tags", NULL, 120, 13020, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.utils", NULL, 121, 3599, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.packaging.version", NULL, 122, 14018, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.platformdirs", NULL, 123, 10944, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.platformdirs.android", NULL, 124, 4377, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.platformdirs.api", NULL, 125, 5142, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.platformdirs.version", NULL, 126, 211, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.platformdirs.windows", NULL, 127, 6455, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.typing_extensions", NULL, 128, 70157, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources._vendor.zipp", NULL, 129, 10022, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkg_resources.extern", NULL, 130, 2773, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"psycopg2", modulecode_psycopg2, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"psycopg2._ipaddress", modulecode_psycopg2$_ipaddress, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"psycopg2._json", modulecode_psycopg2$_json, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"psycopg2._psycopg", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"psycopg2._range", modulecode_psycopg2$_range, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"psycopg2.extensions", modulecode_psycopg2$extensions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"psycopg2.extras", modulecode_psycopg2$extras, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"psycopg2.sql", modulecode_psycopg2$sql, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"py_compile", NULL, 131, 7138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow", modulecode_pyarrow, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow._compute", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow._compute_docstrings", modulecode_pyarrow$_compute_docstrings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow._dataset", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow._dataset_parquet", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow._feather", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow._fs", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow._generated_version", modulecode_pyarrow$_generated_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow._hdfs", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow._hdfsio", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow._parquet", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow._s3fs", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow.compute", modulecode_pyarrow$compute, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow.dataset", modulecode_pyarrow$dataset, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow.feather", modulecode_pyarrow$feather, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow.filesystem", modulecode_pyarrow$filesystem, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow.fs", modulecode_pyarrow$fs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow.hdfs", modulecode_pyarrow$hdfs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow.ipc", modulecode_pyarrow$ipc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow.lib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow.pandas_compat", modulecode_pyarrow$pandas_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow.parquet", modulecode_pyarrow$parquet, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow.parquet.core", modulecode_pyarrow$parquet$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow.serialization", modulecode_pyarrow$serialization, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow.types", modulecode_pyarrow$types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow.util", modulecode_pyarrow$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow.vendored", modulecode_pyarrow$vendored, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow.vendored.docscrape", modulecode_pyarrow$vendored$docscrape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyarrow.vendored.version", modulecode_pyarrow$vendored$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1", modulecode_pyasn1, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.codec", modulecode_pyasn1$codec, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.codec.ber", modulecode_pyasn1$codec$ber, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.codec.ber.decoder", modulecode_pyasn1$codec$ber$decoder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.codec.ber.eoo", modulecode_pyasn1$codec$ber$eoo, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.codec.cer", modulecode_pyasn1$codec$cer, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.codec.cer.decoder", modulecode_pyasn1$codec$cer$decoder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.codec.der", modulecode_pyasn1$codec$der, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.codec.der.decoder", modulecode_pyasn1$codec$der$decoder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.compat", modulecode_pyasn1$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.compat.binary", modulecode_pyasn1$compat$binary, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.compat.calling", modulecode_pyasn1$compat$calling, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.compat.dateandtime", modulecode_pyasn1$compat$dateandtime, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.compat.integer", modulecode_pyasn1$compat$integer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.compat.octets", modulecode_pyasn1$compat$octets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.compat.string", modulecode_pyasn1$compat$string, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.debug", modulecode_pyasn1$debug, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.error", modulecode_pyasn1$error, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.type", modulecode_pyasn1$type, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.type.base", modulecode_pyasn1$type$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.type.char", modulecode_pyasn1$type$char, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.type.constraint", modulecode_pyasn1$type$constraint, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.type.error", modulecode_pyasn1$type$error, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.type.namedtype", modulecode_pyasn1$type$namedtype, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.type.namedval", modulecode_pyasn1$type$namedval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.type.tag", modulecode_pyasn1$type$tag, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.type.tagmap", modulecode_pyasn1$type$tagmap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.type.univ", modulecode_pyasn1$type$univ, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyasn1.type.useful", modulecode_pyasn1$type$useful, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser", NULL, 132, 2394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser.ast_transforms", NULL, 133, 2460, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser.c_ast", NULL, 134, 37220, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser.c_lexer", NULL, 135, 11818, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser.c_parser", NULL, 136, 61239, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser.lextab", NULL, 137, 5561, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser.ply", NULL, 138, 136, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser.ply.lex", NULL, 139, 21394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser.ply.yacc", NULL, 140, 53611, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser.plyparser", NULL, 141, 4574, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pycparser.yacctab", NULL, 142, 141815, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pydoc", NULL, 143, 84339, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyexpat", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pynput", modulecode_pynput, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pynput._util", modulecode_pynput$_util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pynput._util.win32", modulecode_pynput$_util$win32, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pynput._util.win32_vks", modulecode_pynput$_util$win32_vks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pynput.keyboard", modulecode_pynput$keyboard, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pynput.keyboard._base", modulecode_pynput$keyboard$_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pynput.keyboard._win32", modulecode_pynput$keyboard$_win32, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pynput.mouse", modulecode_pynput$mouse, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pynput.mouse._base", modulecode_pynput$mouse$_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pynput.mouse._win32", modulecode_pynput$mouse$_win32, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing", modulecode_pyparsing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing.actions", modulecode_pyparsing$actions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing.common", modulecode_pyparsing$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing.core", modulecode_pyparsing$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing.diagram", modulecode_pyparsing$diagram, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing.exceptions", modulecode_pyparsing$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing.helpers", modulecode_pyparsing$helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing.results", modulecode_pyparsing$results, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing.testing", modulecode_pyparsing$testing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing.unicode", modulecode_pyparsing$unicode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyparsing.util", modulecode_pyparsing$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyperclip", modulecode_pyperclip, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline", modulecode_pyreadline, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.clipboard", modulecode_pyreadline$clipboard, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.clipboard.no_clipboard", modulecode_pyreadline$clipboard$no_clipboard, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.clipboard.win32_clipboard", modulecode_pyreadline$clipboard$win32_clipboard, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.console", modulecode_pyreadline$console, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.console.ansi", modulecode_pyreadline$console$ansi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.console.console", modulecode_pyreadline$console$console, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.console.event", modulecode_pyreadline$console$event, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.error", modulecode_pyreadline$error, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.keysyms", modulecode_pyreadline$keysyms, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.keysyms.common", modulecode_pyreadline$keysyms$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.keysyms.ironpython_keysyms", modulecode_pyreadline$keysyms$ironpython_keysyms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.keysyms.keysyms", modulecode_pyreadline$keysyms$keysyms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.keysyms.winconstants", modulecode_pyreadline$keysyms$winconstants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.lineeditor", modulecode_pyreadline$lineeditor, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.lineeditor.history", modulecode_pyreadline$lineeditor$history, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.lineeditor.lineobj", modulecode_pyreadline$lineeditor$lineobj, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.lineeditor.wordmatcher", modulecode_pyreadline$lineeditor$wordmatcher, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.logger", modulecode_pyreadline$logger, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.modes", modulecode_pyreadline$modes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.modes.basemode", modulecode_pyreadline$modes$basemode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.modes.emacs", modulecode_pyreadline$modes$emacs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.modes.notemacs", modulecode_pyreadline$modes$notemacs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.modes.vi", modulecode_pyreadline$modes$vi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.py3k_compat", modulecode_pyreadline$py3k_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.release", modulecode_pyreadline$release, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.rlmain", modulecode_pyreadline$rlmain, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyreadline.unicode_helper", modulecode_pyreadline$unicode_helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytesseract", modulecode_pytesseract, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytesseract.pytesseract", modulecode_pytesseract$pytesseract, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytz", modulecode_pytz, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytz.exceptions", modulecode_pytz$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytz.lazy", modulecode_pytz$lazy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytz.tzfile", modulecode_pytz$tzfile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pytz.tzinfo", modulecode_pytz$tzinfo, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"readline", modulecode_readline, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests", modulecode_requests, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.adapters", modulecode_requests$adapters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.api", modulecode_requests$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.auth", modulecode_requests$auth, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.certs", modulecode_requests$certs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.compat", modulecode_requests$compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.cookies", modulecode_requests$cookies, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.exceptions", modulecode_requests$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.hooks", modulecode_requests$hooks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.models", modulecode_requests$models, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages", modulecode_requests$packages, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade", modulecode_requests$packages$charade, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.big5freq", modulecode_requests$packages$charade$big5freq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.big5prober", modulecode_requests$packages$charade$big5prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.chardistribution", modulecode_requests$packages$charade$chardistribution, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.charsetgroupprober", modulecode_requests$packages$charade$charsetgroupprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.charsetprober", modulecode_requests$packages$charade$charsetprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.codingstatemachine", modulecode_requests$packages$charade$codingstatemachine, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.compat", modulecode_requests$packages$charade$compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.constants", modulecode_requests$packages$charade$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.cp949prober", modulecode_requests$packages$charade$cp949prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.escprober", modulecode_requests$packages$charade$escprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.escsm", modulecode_requests$packages$charade$escsm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.eucjpprober", modulecode_requests$packages$charade$eucjpprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.euckrfreq", modulecode_requests$packages$charade$euckrfreq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.euckrprober", modulecode_requests$packages$charade$euckrprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.euctwfreq", modulecode_requests$packages$charade$euctwfreq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.euctwprober", modulecode_requests$packages$charade$euctwprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.gb2312freq", modulecode_requests$packages$charade$gb2312freq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.gb2312prober", modulecode_requests$packages$charade$gb2312prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.hebrewprober", modulecode_requests$packages$charade$hebrewprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.jisfreq", modulecode_requests$packages$charade$jisfreq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.jpcntx", modulecode_requests$packages$charade$jpcntx, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.langbulgarianmodel", modulecode_requests$packages$charade$langbulgarianmodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.langcyrillicmodel", modulecode_requests$packages$charade$langcyrillicmodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.langgreekmodel", modulecode_requests$packages$charade$langgreekmodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.langhebrewmodel", modulecode_requests$packages$charade$langhebrewmodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.langhungarianmodel", modulecode_requests$packages$charade$langhungarianmodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.langthaimodel", modulecode_requests$packages$charade$langthaimodel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.latin1prober", modulecode_requests$packages$charade$latin1prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.mbcharsetprober", modulecode_requests$packages$charade$mbcharsetprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.mbcsgroupprober", modulecode_requests$packages$charade$mbcsgroupprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.mbcssm", modulecode_requests$packages$charade$mbcssm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.sbcharsetprober", modulecode_requests$packages$charade$sbcharsetprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.sbcsgroupprober", modulecode_requests$packages$charade$sbcsgroupprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.sjisprober", modulecode_requests$packages$charade$sjisprober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.universaldetector", modulecode_requests$packages$charade$universaldetector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.charade.utf8prober", modulecode_requests$packages$charade$utf8prober, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.urllib3", modulecode_requests$packages$urllib3, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.urllib3._collections", modulecode_requests$packages$urllib3$_collections, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.urllib3.connection", modulecode_requests$packages$urllib3$connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.urllib3.connectionpool", modulecode_requests$packages$urllib3$connectionpool, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.urllib3.contrib", modulecode_requests$packages$urllib3$contrib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.urllib3.contrib.pyopenssl", modulecode_requests$packages$urllib3$contrib$pyopenssl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.urllib3.exceptions", modulecode_requests$packages$urllib3$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.urllib3.fields", modulecode_requests$packages$urllib3$fields, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.urllib3.filepost", modulecode_requests$packages$urllib3$filepost, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.urllib3.packages", modulecode_requests$packages$urllib3$packages, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.urllib3.packages.ordered_dict", modulecode_requests$packages$urllib3$packages$ordered_dict, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.urllib3.packages.six", modulecode_requests$packages$urllib3$packages$six, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.urllib3.packages.ssl_match_hostname", modulecode_requests$packages$urllib3$packages$ssl_match_hostname, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.urllib3.poolmanager", modulecode_requests$packages$urllib3$poolmanager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.urllib3.request", modulecode_requests$packages$urllib3$request, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.urllib3.response", modulecode_requests$packages$urllib3$response, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.packages.urllib3.util", modulecode_requests$packages$urllib3$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.sessions", modulecode_requests$sessions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.status_codes", modulecode_requests$status_codes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.structures", modulecode_requests$structures, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests.utils", modulecode_requests$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests_toolbelt", modulecode_requests_toolbelt, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests_toolbelt._compat", modulecode_requests_toolbelt$_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests_toolbelt.adapters", modulecode_requests_toolbelt$adapters, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests_toolbelt.adapters.source", modulecode_requests_toolbelt$adapters$source, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests_toolbelt.adapters.ssl", modulecode_requests_toolbelt$adapters$ssl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests_toolbelt.auth", modulecode_requests_toolbelt$auth, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests_toolbelt.auth._digest_auth_compat", modulecode_requests_toolbelt$auth$_digest_auth_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests_toolbelt.auth.guess", modulecode_requests_toolbelt$auth$guess, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests_toolbelt.auth.http_proxy_digest", modulecode_requests_toolbelt$auth$http_proxy_digest, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests_toolbelt.multipart", modulecode_requests_toolbelt$multipart, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests_toolbelt.multipart.decoder", modulecode_requests_toolbelt$multipart$decoder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests_toolbelt.multipart.encoder", modulecode_requests_toolbelt$multipart$encoder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests_toolbelt.streaming_iterator", modulecode_requests_toolbelt$streaming_iterator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests_toolbelt.utils", modulecode_requests_toolbelt$utils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"requests_toolbelt.utils.user_agent", modulecode_requests_toolbelt$utils$user_agent, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"runpy", NULL, 144, 7892, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy", modulecode_scipy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.__config__", modulecode_scipy$__config__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy._distributor_init", modulecode_scipy$_distributor_init, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy._lib", modulecode_scipy$_lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy._lib._bunch", modulecode_scipy$_lib$_bunch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy._lib._ccallback", modulecode_scipy$_lib$_ccallback, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy._lib._ccallback_c", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy._lib._pep440", modulecode_scipy$_lib$_pep440, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy._lib._testutils", modulecode_scipy$_lib$_testutils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy._lib._threadsafety", modulecode_scipy$_lib$_threadsafety, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy._lib._uarray", modulecode_scipy$_lib$_uarray, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy._lib._uarray._backend", modulecode_scipy$_lib$_uarray$_backend, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy._lib._uarray._uarray", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy._lib._util", modulecode_scipy$_lib$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy._lib.decorator", modulecode_scipy$_lib$decorator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy._lib.deprecation", modulecode_scipy$_lib$deprecation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy._lib.doccer", modulecode_scipy$_lib$doccer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy._lib.messagestream", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy._lib.uarray", modulecode_scipy$_lib$uarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.constants", modulecode_scipy$constants, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.constants.codata", modulecode_scipy$constants$codata, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.constants.constants", modulecode_scipy$constants$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.fft", modulecode_scipy$fft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.fft._backend", modulecode_scipy$fft$_backend, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.fft._basic", modulecode_scipy$fft$_basic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.fft._fftlog", modulecode_scipy$fft$_fftlog, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.fft._helper", modulecode_scipy$fft$_helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.fft._pocketfft", modulecode_scipy$fft$_pocketfft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.fft._pocketfft.basic", modulecode_scipy$fft$_pocketfft$basic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.fft._pocketfft.helper", modulecode_scipy$fft$_pocketfft$helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.fft._pocketfft.pypocketfft", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.fft._pocketfft.realtransforms", modulecode_scipy$fft$_pocketfft$realtransforms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.fft._realtransforms", modulecode_scipy$fft$_realtransforms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.integrate", modulecode_scipy$integrate, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.integrate._bvp", modulecode_scipy$integrate$_bvp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.integrate._dop", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.integrate._ivp", modulecode_scipy$integrate$_ivp, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.integrate._ivp.base", modulecode_scipy$integrate$_ivp$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.integrate._ivp.bdf", modulecode_scipy$integrate$_ivp$bdf, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.integrate._ivp.common", modulecode_scipy$integrate$_ivp$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.integrate._ivp.dop853_coefficients", modulecode_scipy$integrate$_ivp$dop853_coefficients, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.integrate._ivp.ivp", modulecode_scipy$integrate$_ivp$ivp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.integrate._ivp.lsoda", modulecode_scipy$integrate$_ivp$lsoda, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.integrate._ivp.radau", modulecode_scipy$integrate$_ivp$radau, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.integrate._ivp.rk", modulecode_scipy$integrate$_ivp$rk, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.integrate._ode", modulecode_scipy$integrate$_ode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.integrate._odepack", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.integrate._quad_vec", modulecode_scipy$integrate$_quad_vec, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.integrate._quadpack", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.integrate._quadrature", modulecode_scipy$integrate$_quadrature, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.integrate.lsoda", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.integrate.odepack", modulecode_scipy$integrate$odepack, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.integrate.quadpack", modulecode_scipy$integrate$quadpack, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.integrate.vode", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.interpolate", modulecode_scipy$interpolate, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.interpolate._bspl", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.interpolate._bsplines", modulecode_scipy$interpolate$_bsplines, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.interpolate._cubic", modulecode_scipy$interpolate$_cubic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.interpolate._fitpack", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.interpolate._fitpack_impl", modulecode_scipy$interpolate$_fitpack_impl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.interpolate._pade", modulecode_scipy$interpolate$_pade, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.interpolate._ppoly", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.interpolate._rbfinterp", modulecode_scipy$interpolate$_rbfinterp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.interpolate._rbfinterp_pythran", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.interpolate.dfitpack", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.interpolate.fitpack", modulecode_scipy$interpolate$fitpack, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.interpolate.fitpack2", modulecode_scipy$interpolate$fitpack2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.interpolate.interpnd", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.interpolate.interpolate", modulecode_scipy$interpolate$interpolate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.interpolate.ndgriddata", modulecode_scipy$interpolate$ndgriddata, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.interpolate.polyint", modulecode_scipy$interpolate$polyint, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.interpolate.rbf", modulecode_scipy$interpolate$rbf, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.io", modulecode_scipy$io, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.io._fortran", modulecode_scipy$io$_fortran, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.io.harwell_boeing", modulecode_scipy$io$harwell_boeing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.io.harwell_boeing._fortran_format_parser", modulecode_scipy$io$harwell_boeing$_fortran_format_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.io.harwell_boeing.hb", modulecode_scipy$io$harwell_boeing$hb, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.io.idl", modulecode_scipy$io$idl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.io.matlab", modulecode_scipy$io$matlab, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.io.matlab.byteordercodes", modulecode_scipy$io$matlab$byteordercodes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.io.matlab.mio", modulecode_scipy$io$matlab$mio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.io.matlab.mio4", modulecode_scipy$io$matlab$mio4, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.io.matlab.mio5", modulecode_scipy$io$matlab$mio5, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.io.matlab.mio5_params", modulecode_scipy$io$matlab$mio5_params, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.io.matlab.mio5_utils", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.io.matlab.mio_utils", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.io.matlab.miobase", modulecode_scipy$io$matlab$miobase, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.io.matlab.streams", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.io.mmio", modulecode_scipy$io$mmio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.io.netcdf", modulecode_scipy$io$netcdf, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg", modulecode_scipy$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg._decomp_cossin", modulecode_scipy$linalg$_decomp_cossin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg._decomp_ldl", modulecode_scipy$linalg$_decomp_ldl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg._decomp_polar", modulecode_scipy$linalg$_decomp_polar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg._decomp_qz", modulecode_scipy$linalg$_decomp_qz, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg._decomp_update", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg._expm_frechet", modulecode_scipy$linalg$_expm_frechet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg._fblas", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg._flapack", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg._flinalg", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg._interpolative", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg._interpolative_backend", modulecode_scipy$linalg$_interpolative_backend, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg._matfuncs_inv_ssq", modulecode_scipy$linalg$_matfuncs_inv_ssq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg._matfuncs_sqrtm", modulecode_scipy$linalg$_matfuncs_sqrtm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg._matfuncs_sqrtm_triu", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg._procrustes", modulecode_scipy$linalg$_procrustes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg._sketches", modulecode_scipy$linalg$_sketches, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg._solve_toeplitz", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg._solvers", modulecode_scipy$linalg$_solvers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg.basic", modulecode_scipy$linalg$basic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg.blas", modulecode_scipy$linalg$blas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg.cython_blas", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg.cython_lapack", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg.decomp", modulecode_scipy$linalg$decomp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg.decomp_cholesky", modulecode_scipy$linalg$decomp_cholesky, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg.decomp_lu", modulecode_scipy$linalg$decomp_lu, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg.decomp_qr", modulecode_scipy$linalg$decomp_qr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg.decomp_schur", modulecode_scipy$linalg$decomp_schur, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg.decomp_svd", modulecode_scipy$linalg$decomp_svd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg.flinalg", modulecode_scipy$linalg$flinalg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg.interpolative", modulecode_scipy$linalg$interpolative, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg.lapack", modulecode_scipy$linalg$lapack, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg.matfuncs", modulecode_scipy$linalg$matfuncs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg.misc", modulecode_scipy$linalg$misc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.linalg.special_matrices", modulecode_scipy$linalg$special_matrices, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.misc", modulecode_scipy$misc, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.misc.common", modulecode_scipy$misc$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.misc.doccer", modulecode_scipy$misc$doccer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.ndimage", modulecode_scipy$ndimage, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.ndimage._nd_image", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.ndimage._ni_docstrings", modulecode_scipy$ndimage$_ni_docstrings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.ndimage._ni_label", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.ndimage._ni_support", modulecode_scipy$ndimage$_ni_support, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.ndimage.filters", modulecode_scipy$ndimage$filters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.ndimage.fourier", modulecode_scipy$ndimage$fourier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.ndimage.interpolation", modulecode_scipy$ndimage$interpolation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.ndimage.measurements", modulecode_scipy$ndimage$measurements, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.ndimage.morphology", modulecode_scipy$ndimage$morphology, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize", modulecode_scipy$optimize, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize.__nnls", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._basinhopping", modulecode_scipy$optimize$_basinhopping, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._bglu_dense", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._cobyla", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._constraints", modulecode_scipy$optimize$_constraints, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._differentiable_functions", modulecode_scipy$optimize$_differentiable_functions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._differentialevolution", modulecode_scipy$optimize$_differentialevolution, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._dual_annealing", modulecode_scipy$optimize$_dual_annealing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._group_columns", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._hessian_update_strategy", modulecode_scipy$optimize$_hessian_update_strategy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._highs", modulecode_scipy$optimize$_highs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._highs._highs_constants", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._highs._highs_wrapper", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._lbfgsb", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._linprog", modulecode_scipy$optimize$_linprog, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._linprog_doc", modulecode_scipy$optimize$_linprog_doc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._linprog_highs", modulecode_scipy$optimize$_linprog_highs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._linprog_ip", modulecode_scipy$optimize$_linprog_ip, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._linprog_rs", modulecode_scipy$optimize$_linprog_rs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._linprog_simplex", modulecode_scipy$optimize$_linprog_simplex, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._linprog_util", modulecode_scipy$optimize$_linprog_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._lsap", modulecode_scipy$optimize$_lsap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._lsap_module", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._lsq", modulecode_scipy$optimize$_lsq, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._lsq.bvls", modulecode_scipy$optimize$_lsq$bvls, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._lsq.common", modulecode_scipy$optimize$_lsq$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._lsq.dogbox", modulecode_scipy$optimize$_lsq$dogbox, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._lsq.givens_elimination", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._lsq.least_squares", modulecode_scipy$optimize$_lsq$least_squares, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._lsq.lsq_linear", modulecode_scipy$optimize$_lsq$lsq_linear, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._lsq.trf", modulecode_scipy$optimize$_lsq$trf, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._lsq.trf_linear", modulecode_scipy$optimize$_lsq$trf_linear, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._minimize", modulecode_scipy$optimize$_minimize, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._minpack", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._nnls", modulecode_scipy$optimize$_nnls, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._numdiff", modulecode_scipy$optimize$_numdiff, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._qap", modulecode_scipy$optimize$_qap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._remove_redundancy", modulecode_scipy$optimize$_remove_redundancy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._root", modulecode_scipy$optimize$_root, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._root_scalar", modulecode_scipy$optimize$_root_scalar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._shgo", modulecode_scipy$optimize$_shgo, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._shgo_lib", modulecode_scipy$optimize$_shgo_lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._shgo_lib.triangulation", modulecode_scipy$optimize$_shgo_lib$triangulation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._slsqp", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._spectral", modulecode_scipy$optimize$_spectral, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._trlib", modulecode_scipy$optimize$_trlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._trlib._trlib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._trustregion", modulecode_scipy$optimize$_trustregion, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._trustregion_constr", modulecode_scipy$optimize$_trustregion_constr, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._trustregion_constr.canonical_constraint", modulecode_scipy$optimize$_trustregion_constr$canonical_constraint, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._trustregion_constr.equality_constrained_sqp", modulecode_scipy$optimize$_trustregion_constr$equality_constrained_sqp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._trustregion_constr.minimize_trustregion_constr", modulecode_scipy$optimize$_trustregion_constr$minimize_trustregion_constr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._trustregion_constr.projections", modulecode_scipy$optimize$_trustregion_constr$projections, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._trustregion_constr.qp_subproblem", modulecode_scipy$optimize$_trustregion_constr$qp_subproblem, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._trustregion_constr.report", modulecode_scipy$optimize$_trustregion_constr$report, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._trustregion_constr.tr_interior_point", modulecode_scipy$optimize$_trustregion_constr$tr_interior_point, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._trustregion_dogleg", modulecode_scipy$optimize$_trustregion_dogleg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._trustregion_exact", modulecode_scipy$optimize$_trustregion_exact, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._trustregion_krylov", modulecode_scipy$optimize$_trustregion_krylov, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._trustregion_ncg", modulecode_scipy$optimize$_trustregion_ncg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize._zeros", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize.cobyla", modulecode_scipy$optimize$cobyla, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize.lbfgsb", modulecode_scipy$optimize$lbfgsb, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize.linesearch", modulecode_scipy$optimize$linesearch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize.minpack", modulecode_scipy$optimize$minpack, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize.minpack2", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize.moduleTNC", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize.nonlin", modulecode_scipy$optimize$nonlin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize.optimize", modulecode_scipy$optimize$optimize, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize.slsqp", modulecode_scipy$optimize$slsqp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize.tnc", modulecode_scipy$optimize$tnc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.optimize.zeros", modulecode_scipy$optimize$zeros, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse", modulecode_scipy$sparse, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse._csparsetools", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse._index", modulecode_scipy$sparse$_index, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse._matrix_io", modulecode_scipy$sparse$_matrix_io, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse._sparsetools", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.base", modulecode_scipy$sparse$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.bsr", modulecode_scipy$sparse$bsr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.compressed", modulecode_scipy$sparse$compressed, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.construct", modulecode_scipy$sparse$construct, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.coo", modulecode_scipy$sparse$coo, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.csc", modulecode_scipy$sparse$csc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.csgraph", modulecode_scipy$sparse$csgraph, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.csgraph._flow", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.csgraph._laplacian", modulecode_scipy$sparse$csgraph$_laplacian, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.csgraph._matching", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.csgraph._min_spanning_tree", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.csgraph._reordering", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.csgraph._shortest_path", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.csgraph._tools", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.csgraph._traversal", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.csgraph._validation", modulecode_scipy$sparse$csgraph$_validation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.csr", modulecode_scipy$sparse$csr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.data", modulecode_scipy$sparse$data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.dia", modulecode_scipy$sparse$dia, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.dok", modulecode_scipy$sparse$dok, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.extract", modulecode_scipy$sparse$extract, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.lil", modulecode_scipy$sparse$lil, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg", modulecode_scipy$sparse$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg._expm_multiply", modulecode_scipy$sparse$linalg$_expm_multiply, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg._norm", modulecode_scipy$sparse$linalg$_norm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg._onenormest", modulecode_scipy$sparse$linalg$_onenormest, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg.dsolve", modulecode_scipy$sparse$linalg$dsolve, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg.dsolve._add_newdocs", modulecode_scipy$sparse$linalg$dsolve$_add_newdocs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg.dsolve._superlu", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg.dsolve.linsolve", modulecode_scipy$sparse$linalg$dsolve$linsolve, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg.eigen", modulecode_scipy$sparse$linalg$eigen, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg.eigen.arpack", modulecode_scipy$sparse$linalg$eigen$arpack, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg.eigen.arpack._arpack", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg.eigen.arpack.arpack", modulecode_scipy$sparse$linalg$eigen$arpack$arpack, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg.eigen.lobpcg", modulecode_scipy$sparse$linalg$eigen$lobpcg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg.eigen.lobpcg.lobpcg", modulecode_scipy$sparse$linalg$eigen$lobpcg$lobpcg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg.interface", modulecode_scipy$sparse$linalg$interface, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg.isolve", modulecode_scipy$sparse$linalg$isolve, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg.isolve._gcrotmk", modulecode_scipy$sparse$linalg$isolve$_gcrotmk, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg.isolve._iterative", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg.isolve.iterative", modulecode_scipy$sparse$linalg$isolve$iterative, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg.isolve.lgmres", modulecode_scipy$sparse$linalg$isolve$lgmres, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg.isolve.lsmr", modulecode_scipy$sparse$linalg$isolve$lsmr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg.isolve.lsqr", modulecode_scipy$sparse$linalg$isolve$lsqr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg.isolve.minres", modulecode_scipy$sparse$linalg$isolve$minres, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg.isolve.utils", modulecode_scipy$sparse$linalg$isolve$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.linalg.matfuncs", modulecode_scipy$sparse$linalg$matfuncs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.spfuncs", modulecode_scipy$sparse$spfuncs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.sparse.sputils", modulecode_scipy$sparse$sputils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.spatial", modulecode_scipy$spatial, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.spatial._distance_pybind", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.spatial._distance_wrap", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.spatial._geometric_slerp", modulecode_scipy$spatial$_geometric_slerp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.spatial._hausdorff", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.spatial._plotutils", modulecode_scipy$spatial$_plotutils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.spatial._procrustes", modulecode_scipy$spatial$_procrustes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.spatial._spherical_voronoi", modulecode_scipy$spatial$_spherical_voronoi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.spatial._voronoi", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.spatial.ckdtree", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.spatial.distance", modulecode_scipy$spatial$distance, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.spatial.kdtree", modulecode_scipy$spatial$kdtree, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.spatial.qhull", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.spatial.transform", modulecode_scipy$spatial$transform, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.spatial.transform._rotation_groups", modulecode_scipy$spatial$transform$_rotation_groups, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.spatial.transform._rotation_spline", modulecode_scipy$spatial$transform$_rotation_spline, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.spatial.transform.rotation", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.special", modulecode_scipy$special, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.special._basic", modulecode_scipy$special$_basic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.special._comb", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.special._ellip_harm", modulecode_scipy$special$_ellip_harm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.special._ellip_harm_2", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.special._lambertw", modulecode_scipy$special$_lambertw, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.special._logsumexp", modulecode_scipy$special$_logsumexp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.special._spherical_bessel", modulecode_scipy$special$_spherical_bessel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.special._ufuncs", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.special._ufuncs_cxx", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.special.cython_special", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.special.orthogonal", modulecode_scipy$special$orthogonal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.special.sf_error", modulecode_scipy$special$sf_error, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.special.specfun", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.special.spfun_stats", modulecode_scipy$special$spfun_stats, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats", modulecode_scipy$stats, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._binned_statistic", modulecode_scipy$stats$_binned_statistic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._binomtest", modulecode_scipy$stats$_binomtest, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._boost", modulecode_scipy$stats$_boost, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._boost.beta_ufunc", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._boost.binom_ufunc", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._boost.nbinom_ufunc", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._bootstrap", modulecode_scipy$stats$_bootstrap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._common", modulecode_scipy$stats$_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._constants", modulecode_scipy$stats$_constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._continuous_distns", modulecode_scipy$stats$_continuous_distns, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._crosstab", modulecode_scipy$stats$_crosstab, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._discrete_distns", modulecode_scipy$stats$_discrete_distns, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._distn_infrastructure", modulecode_scipy$stats$_distn_infrastructure, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._distr_params", modulecode_scipy$stats$_distr_params, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._entropy", modulecode_scipy$stats$_entropy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._hypotests", modulecode_scipy$stats$_hypotests, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._ksstats", modulecode_scipy$stats$_ksstats, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._mannwhitneyu", modulecode_scipy$stats$_mannwhitneyu, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._multivariate", modulecode_scipy$stats$_multivariate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._page_trend_test", modulecode_scipy$stats$_page_trend_test, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._qmc", modulecode_scipy$stats$_qmc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._qmc_cy", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._relative_risk", modulecode_scipy$stats$_relative_risk, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._rvs_sampling", modulecode_scipy$stats$_rvs_sampling, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._sobol", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._stats", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._stats_mstats_common", modulecode_scipy$stats$_stats_mstats_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._tukeylambda_stats", modulecode_scipy$stats$_tukeylambda_stats, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats._wilcoxon_data", modulecode_scipy$stats$_wilcoxon_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats.biasedurn", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats.contingency", modulecode_scipy$stats$contingency, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats.distributions", modulecode_scipy$stats$distributions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats.kde", modulecode_scipy$stats$kde, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats.morestats", modulecode_scipy$stats$morestats, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats.mstats", modulecode_scipy$stats$mstats, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats.mstats_basic", modulecode_scipy$stats$mstats_basic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats.mstats_extras", modulecode_scipy$stats$mstats_extras, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats.mvn", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats.qmc", modulecode_scipy$stats$qmc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats.statlib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.stats.stats", modulecode_scipy$stats$stats, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"scipy.version", modulecode_scipy$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"select", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"six", modulecode_six, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"soupsieve", modulecode_soupsieve, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"soupsieve.__meta__", modulecode_soupsieve$__meta__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"soupsieve.css_match", modulecode_soupsieve$css_match, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"soupsieve.css_parser", modulecode_soupsieve$css_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"soupsieve.css_types", modulecode_soupsieve$css_types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"soupsieve.pretty", modulecode_soupsieve$pretty, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"soupsieve.util", modulecode_soupsieve$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy", modulecode_sqlalchemy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.connectors", modulecode_sqlalchemy$connectors, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.connectors.pyodbc", modulecode_sqlalchemy$connectors$pyodbc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.cyextension", modulecode_sqlalchemy$cyextension, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.cyextension.collections", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.cyextension.immutabledict", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.cyextension.processors", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.cyextension.resultproxy", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.cyextension.util", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects", modulecode_sqlalchemy$dialects, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mssql", modulecode_sqlalchemy$dialects$mssql, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mssql.base", modulecode_sqlalchemy$dialects$mssql$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mssql.information_schema", modulecode_sqlalchemy$dialects$mssql$information_schema, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mssql.json", modulecode_sqlalchemy$dialects$mssql$json, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mssql.pymssql", modulecode_sqlalchemy$dialects$mssql$pymssql, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mssql.pyodbc", modulecode_sqlalchemy$dialects$mssql$pyodbc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mysql", modulecode_sqlalchemy$dialects$mysql, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mysql.aiomysql", modulecode_sqlalchemy$dialects$mysql$aiomysql, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mysql.asyncmy", modulecode_sqlalchemy$dialects$mysql$asyncmy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mysql.base", modulecode_sqlalchemy$dialects$mysql$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mysql.cymysql", modulecode_sqlalchemy$dialects$mysql$cymysql, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mysql.dml", modulecode_sqlalchemy$dialects$mysql$dml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mysql.enumerated", modulecode_sqlalchemy$dialects$mysql$enumerated, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mysql.expression", modulecode_sqlalchemy$dialects$mysql$expression, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mysql.json", modulecode_sqlalchemy$dialects$mysql$json, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mysql.mariadb", modulecode_sqlalchemy$dialects$mysql$mariadb, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mysql.mariadbconnector", modulecode_sqlalchemy$dialects$mysql$mariadbconnector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mysql.mysqlconnector", modulecode_sqlalchemy$dialects$mysql$mysqlconnector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mysql.mysqldb", modulecode_sqlalchemy$dialects$mysql$mysqldb, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mysql.pymysql", modulecode_sqlalchemy$dialects$mysql$pymysql, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mysql.pyodbc", modulecode_sqlalchemy$dialects$mysql$pyodbc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mysql.reflection", modulecode_sqlalchemy$dialects$mysql$reflection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mysql.reserved_words", modulecode_sqlalchemy$dialects$mysql$reserved_words, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.mysql.types", modulecode_sqlalchemy$dialects$mysql$types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.oracle", modulecode_sqlalchemy$dialects$oracle, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.oracle.base", modulecode_sqlalchemy$dialects$oracle$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.oracle.cx_oracle", modulecode_sqlalchemy$dialects$oracle$cx_oracle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.oracle.dictionary", modulecode_sqlalchemy$dialects$oracle$dictionary, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.oracle.oracledb", modulecode_sqlalchemy$dialects$oracle$oracledb, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.oracle.types", modulecode_sqlalchemy$dialects$oracle$types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.postgresql", modulecode_sqlalchemy$dialects$postgresql, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.postgresql._psycopg_common", modulecode_sqlalchemy$dialects$postgresql$_psycopg_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.postgresql.array", modulecode_sqlalchemy$dialects$postgresql$array, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.postgresql.asyncpg", modulecode_sqlalchemy$dialects$postgresql$asyncpg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.postgresql.base", modulecode_sqlalchemy$dialects$postgresql$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.postgresql.dml", modulecode_sqlalchemy$dialects$postgresql$dml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.postgresql.ext", modulecode_sqlalchemy$dialects$postgresql$ext, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.postgresql.hstore", modulecode_sqlalchemy$dialects$postgresql$hstore, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.postgresql.json", modulecode_sqlalchemy$dialects$postgresql$json, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.postgresql.named_types", modulecode_sqlalchemy$dialects$postgresql$named_types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.postgresql.pg8000", modulecode_sqlalchemy$dialects$postgresql$pg8000, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.postgresql.pg_catalog", modulecode_sqlalchemy$dialects$postgresql$pg_catalog, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.postgresql.psycopg", modulecode_sqlalchemy$dialects$postgresql$psycopg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.postgresql.psycopg2", modulecode_sqlalchemy$dialects$postgresql$psycopg2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.postgresql.psycopg2cffi", modulecode_sqlalchemy$dialects$postgresql$psycopg2cffi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.postgresql.ranges", modulecode_sqlalchemy$dialects$postgresql$ranges, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.postgresql.types", modulecode_sqlalchemy$dialects$postgresql$types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.sqlite", modulecode_sqlalchemy$dialects$sqlite, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.sqlite.aiosqlite", modulecode_sqlalchemy$dialects$sqlite$aiosqlite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.sqlite.base", modulecode_sqlalchemy$dialects$sqlite$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.sqlite.dml", modulecode_sqlalchemy$dialects$sqlite$dml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.sqlite.json", modulecode_sqlalchemy$dialects$sqlite$json, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.sqlite.pysqlcipher", modulecode_sqlalchemy$dialects$sqlite$pysqlcipher, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.dialects.sqlite.pysqlite", modulecode_sqlalchemy$dialects$sqlite$pysqlite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.engine", modulecode_sqlalchemy$engine, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.engine._py_processors", modulecode_sqlalchemy$engine$_py_processors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.engine._py_row", modulecode_sqlalchemy$engine$_py_row, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.engine._py_util", modulecode_sqlalchemy$engine$_py_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.engine.base", modulecode_sqlalchemy$engine$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.engine.characteristics", modulecode_sqlalchemy$engine$characteristics, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.engine.create", modulecode_sqlalchemy$engine$create, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.engine.cursor", modulecode_sqlalchemy$engine$cursor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.engine.default", modulecode_sqlalchemy$engine$default, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.engine.events", modulecode_sqlalchemy$engine$events, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.engine.interfaces", modulecode_sqlalchemy$engine$interfaces, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.engine.mock", modulecode_sqlalchemy$engine$mock, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.engine.processors", modulecode_sqlalchemy$engine$processors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.engine.reflection", modulecode_sqlalchemy$engine$reflection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.engine.result", modulecode_sqlalchemy$engine$result, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.engine.row", modulecode_sqlalchemy$engine$row, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.engine.url", modulecode_sqlalchemy$engine$url, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.engine.util", modulecode_sqlalchemy$engine$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.event", modulecode_sqlalchemy$event, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.event.api", modulecode_sqlalchemy$event$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.event.attr", modulecode_sqlalchemy$event$attr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.event.base", modulecode_sqlalchemy$event$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.event.legacy", modulecode_sqlalchemy$event$legacy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.event.registry", modulecode_sqlalchemy$event$registry, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.exc", modulecode_sqlalchemy$exc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.ext", modulecode_sqlalchemy$ext, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.ext.compiler", modulecode_sqlalchemy$ext$compiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.inspection", modulecode_sqlalchemy$inspection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.log", modulecode_sqlalchemy$log, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.pool", modulecode_sqlalchemy$pool, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.pool.base", modulecode_sqlalchemy$pool$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.pool.events", modulecode_sqlalchemy$pool$events, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.pool.impl", modulecode_sqlalchemy$pool$impl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.schema", modulecode_sqlalchemy$schema, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql", modulecode_sqlalchemy$sql, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql._dml_constructors", modulecode_sqlalchemy$sql$_dml_constructors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql._elements_constructors", modulecode_sqlalchemy$sql$_elements_constructors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql._py_util", modulecode_sqlalchemy$sql$_py_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql._selectable_constructors", modulecode_sqlalchemy$sql$_selectable_constructors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql._typing", modulecode_sqlalchemy$sql$_typing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.annotation", modulecode_sqlalchemy$sql$annotation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.base", modulecode_sqlalchemy$sql$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.cache_key", modulecode_sqlalchemy$sql$cache_key, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.coercions", modulecode_sqlalchemy$sql$coercions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.compiler", modulecode_sqlalchemy$sql$compiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.crud", modulecode_sqlalchemy$sql$crud, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.ddl", modulecode_sqlalchemy$sql$ddl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.default_comparator", modulecode_sqlalchemy$sql$default_comparator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.dml", modulecode_sqlalchemy$sql$dml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.elements", modulecode_sqlalchemy$sql$elements, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.events", modulecode_sqlalchemy$sql$events, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.expression", modulecode_sqlalchemy$sql$expression, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.functions", modulecode_sqlalchemy$sql$functions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.lambdas", modulecode_sqlalchemy$sql$lambdas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.naming", modulecode_sqlalchemy$sql$naming, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.operators", modulecode_sqlalchemy$sql$operators, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.roles", modulecode_sqlalchemy$sql$roles, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.schema", modulecode_sqlalchemy$sql$schema, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.selectable", modulecode_sqlalchemy$sql$selectable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.sqltypes", modulecode_sqlalchemy$sql$sqltypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.traversals", modulecode_sqlalchemy$sql$traversals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.type_api", modulecode_sqlalchemy$sql$type_api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.util", modulecode_sqlalchemy$sql$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.sql.visitors", modulecode_sqlalchemy$sql$visitors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.types", modulecode_sqlalchemy$types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.util", modulecode_sqlalchemy$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.util._collections", modulecode_sqlalchemy$util$_collections, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.util._concurrency_py3k", modulecode_sqlalchemy$util$_concurrency_py3k, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.util._has_cy", modulecode_sqlalchemy$util$_has_cy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.util._py_collections", modulecode_sqlalchemy$util$_py_collections, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.util.compat", modulecode_sqlalchemy$util$compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.util.concurrency", modulecode_sqlalchemy$util$concurrency, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.util.deprecations", modulecode_sqlalchemy$util$deprecations, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.util.langhelpers", modulecode_sqlalchemy$util$langhelpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.util.preloaded", modulecode_sqlalchemy$util$preloaded, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.util.queue", modulecode_sqlalchemy$util$queue, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.util.topological", modulecode_sqlalchemy$util$topological, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlalchemy.util.typing", modulecode_sqlalchemy$util$typing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlite3", NULL, 145, 112, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sqlite3.dbapi2", NULL, 146, 2440, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"telnetlib", NULL, 147, 18049, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter", NULL, 148, 179325, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter.commondialog", NULL, 149, 1063, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter.constants", NULL, 150, 1615, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter.dialog", NULL, 151, 1391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter.filedialog", NULL, 152, 12217, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter.font", NULL, 153, 6134, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter.messagebox", NULL, 154, 2999, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter.simpledialog", NULL, 155, 10493, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch", modulecode_torch, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch._C", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch._VF", modulecode_torch$_VF, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.__config__", modulecode_torch$__config__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.__future__", modulecode_torch$__future__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch._classes", modulecode_torch$_classes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch._jit_internal", modulecode_torch$_jit_internal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch._linalg_utils", modulecode_torch$_linalg_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch._lobpcg", modulecode_torch$_lobpcg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch._lowrank", modulecode_torch$_lowrank, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch._masked", modulecode_torch$_masked, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch._namedtensor_internals", modulecode_torch$_namedtensor_internals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch._ops", modulecode_torch$_ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch._six", modulecode_torch$_six, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch._sources", modulecode_torch$_sources, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch._storage_docs", modulecode_torch$_storage_docs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch._tensor", modulecode_torch$_tensor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch._tensor_docs", modulecode_torch$_tensor_docs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch._tensor_str", modulecode_torch$_tensor_str, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch._torch_docs", modulecode_torch$_torch_docs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch._utils", modulecode_torch$_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch._utils_internal", modulecode_torch$_utils_internal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch._vmap_internals", modulecode_torch$_vmap_internals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.ao", modulecode_torch$ao, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.ao.nn", modulecode_torch$ao$nn, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.ao.nn.sparse", modulecode_torch$ao$nn$sparse, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.ao.nn.sparse.quantized", modulecode_torch$ao$nn$sparse$quantized, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.ao.nn.sparse.quantized.dynamic", modulecode_torch$ao$nn$sparse$quantized$dynamic, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.ao.nn.sparse.quantized.dynamic.linear", modulecode_torch$ao$nn$sparse$quantized$dynamic$linear, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.ao.nn.sparse.quantized.linear", modulecode_torch$ao$nn$sparse$quantized$linear, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.ao.nn.sparse.quantized.utils", modulecode_torch$ao$nn$sparse$quantized$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.ao.quantization", modulecode_torch$ao$quantization, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.ao.quantization.fake_quantize", modulecode_torch$ao$quantization$fake_quantize, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.ao.quantization.fuse_modules", modulecode_torch$ao$quantization$fuse_modules, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.ao.quantization.fuser_method_mappings", modulecode_torch$ao$quantization$fuser_method_mappings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.ao.quantization.observer", modulecode_torch$ao$quantization$observer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.ao.quantization.qconfig", modulecode_torch$ao$quantization$qconfig, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.ao.quantization.quant_type", modulecode_torch$ao$quantization$quant_type, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.ao.quantization.quantization_mappings", modulecode_torch$ao$quantization$quantization_mappings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.ao.quantization.quantize", modulecode_torch$ao$quantization$quantize, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.ao.quantization.quantize_jit", modulecode_torch$ao$quantization$quantize_jit, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.ao.quantization.stubs", modulecode_torch$ao$quantization$stubs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.ao.quantization.utils", modulecode_torch$ao$quantization$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.autocast_mode", modulecode_torch$autocast_mode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.autograd", modulecode_torch$autograd, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.autograd._functions", modulecode_torch$autograd$_functions, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.autograd._functions.tensor", modulecode_torch$autograd$_functions$tensor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.autograd.anomaly_mode", modulecode_torch$autograd$anomaly_mode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.autograd.forward_ad", modulecode_torch$autograd$forward_ad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.autograd.function", modulecode_torch$autograd$function, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.autograd.functional", modulecode_torch$autograd$functional, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.autograd.grad_mode", modulecode_torch$autograd$grad_mode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.autograd.gradcheck", modulecode_torch$autograd$gradcheck, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.autograd.graph", modulecode_torch$autograd$graph, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.autograd.profiler", modulecode_torch$autograd$profiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.autograd.profiler_legacy", modulecode_torch$autograd$profiler_legacy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.autograd.profiler_util", modulecode_torch$autograd$profiler_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.autograd.variable", modulecode_torch$autograd$variable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.backends", modulecode_torch$backends, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.backends.cuda", modulecode_torch$backends$cuda, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.backends.cudnn", modulecode_torch$backends$cudnn, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.backends.cudnn.rnn", modulecode_torch$backends$cudnn$rnn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.backends.mkl", modulecode_torch$backends$mkl, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.backends.mkldnn", modulecode_torch$backends$mkldnn, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.backends.openmp", modulecode_torch$backends$openmp, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.backends.quantized", modulecode_torch$backends$quantized, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.cpu", modulecode_torch$cpu, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.cpu.amp", modulecode_torch$cpu$amp, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.cpu.amp.autocast_mode", modulecode_torch$cpu$amp$autocast_mode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.cuda", modulecode_torch$cuda, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.cuda._utils", modulecode_torch$cuda$_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.cuda.amp", modulecode_torch$cuda$amp, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.cuda.amp.autocast_mode", modulecode_torch$cuda$amp$autocast_mode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.cuda.amp.common", modulecode_torch$cuda$amp$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.cuda.amp.grad_scaler", modulecode_torch$cuda$amp$grad_scaler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.cuda.graphs", modulecode_torch$cuda$graphs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.cuda.memory", modulecode_torch$cuda$memory, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.cuda.nccl", modulecode_torch$cuda$nccl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.cuda.nvtx", modulecode_torch$cuda$nvtx, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.cuda.profiler", modulecode_torch$cuda$profiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.cuda.random", modulecode_torch$cuda$random, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.cuda.sparse", modulecode_torch$cuda$sparse, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.cuda.streams", modulecode_torch$cuda$streams, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed", modulecode_torch$distributed, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.algorithms", modulecode_torch$distributed$algorithms, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.algorithms._optimizer_overlap", modulecode_torch$distributed$algorithms$_optimizer_overlap, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.algorithms._optimizer_overlap.optimizer_overlap", modulecode_torch$distributed$algorithms$_optimizer_overlap$optimizer_overlap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.algorithms.ddp_comm_hooks", modulecode_torch$distributed$algorithms$ddp_comm_hooks, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.algorithms.ddp_comm_hooks.debugging_hooks", modulecode_torch$distributed$algorithms$ddp_comm_hooks$debugging_hooks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.algorithms.ddp_comm_hooks.default_hooks", modulecode_torch$distributed$algorithms$ddp_comm_hooks$default_hooks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.algorithms.ddp_comm_hooks.optimizer_overlap_hooks", modulecode_torch$distributed$algorithms$ddp_comm_hooks$optimizer_overlap_hooks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.algorithms.ddp_comm_hooks.powerSGD_hook", modulecode_torch$distributed$algorithms$ddp_comm_hooks$powerSGD_hook, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.algorithms.ddp_comm_hooks.quantization_hooks", modulecode_torch$distributed$algorithms$ddp_comm_hooks$quantization_hooks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.algorithms.join", modulecode_torch$distributed$algorithms$join, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.algorithms.model_averaging", modulecode_torch$distributed$algorithms$model_averaging, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.algorithms.model_averaging.averagers", modulecode_torch$distributed$algorithms$model_averaging$averagers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.algorithms.model_averaging.utils", modulecode_torch$distributed$algorithms$model_averaging$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.autograd", modulecode_torch$distributed$autograd, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.constants", modulecode_torch$distributed$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.distributed_c10d", modulecode_torch$distributed$distributed_c10d, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.fsdp", modulecode_torch$distributed$fsdp, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.fsdp.flatten_params_wrapper", modulecode_torch$distributed$fsdp$flatten_params_wrapper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.fsdp.fully_sharded_data_parallel", modulecode_torch$distributed$fsdp$fully_sharded_data_parallel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.fsdp.utils", modulecode_torch$distributed$fsdp$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.fsdp.wrap", modulecode_torch$distributed$fsdp$wrap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.optim", modulecode_torch$distributed$optim, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.optim.functional_adadelta", modulecode_torch$distributed$optim$functional_adadelta, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.optim.functional_adagrad", modulecode_torch$distributed$optim$functional_adagrad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.optim.functional_adam", modulecode_torch$distributed$optim$functional_adam, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.optim.functional_adamax", modulecode_torch$distributed$optim$functional_adamax, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.optim.functional_adamw", modulecode_torch$distributed$optim$functional_adamw, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.optim.functional_rmsprop", modulecode_torch$distributed$optim$functional_rmsprop, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.optim.functional_rprop", modulecode_torch$distributed$optim$functional_rprop, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.optim.functional_sgd", modulecode_torch$distributed$optim$functional_sgd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.optim.optimizer", modulecode_torch$distributed$optim$optimizer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.optim.post_localSGD_optimizer", modulecode_torch$distributed$optim$post_localSGD_optimizer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.optim.utils", modulecode_torch$distributed$optim$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.optim.zero_redundancy_optimizer", modulecode_torch$distributed$optim$zero_redundancy_optimizer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.remote_device", modulecode_torch$distributed$remote_device, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.rendezvous", modulecode_torch$distributed$rendezvous, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.rpc", modulecode_torch$distributed$rpc, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.rpc.api", modulecode_torch$distributed$rpc$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.rpc.backend_registry", modulecode_torch$distributed$rpc$backend_registry, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.rpc.constants", modulecode_torch$distributed$rpc$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.rpc.functions", modulecode_torch$distributed$rpc$functions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.rpc.internal", modulecode_torch$distributed$rpc$internal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.rpc.options", modulecode_torch$distributed$rpc$options, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributed.rpc.server_process_global_profiler", modulecode_torch$distributed$rpc$server_process_global_profiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions", modulecode_torch$distributions, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.bernoulli", modulecode_torch$distributions$bernoulli, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.beta", modulecode_torch$distributions$beta, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.binomial", modulecode_torch$distributions$binomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.categorical", modulecode_torch$distributions$categorical, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.cauchy", modulecode_torch$distributions$cauchy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.chi2", modulecode_torch$distributions$chi2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.constraint_registry", modulecode_torch$distributions$constraint_registry, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.constraints", modulecode_torch$distributions$constraints, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.continuous_bernoulli", modulecode_torch$distributions$continuous_bernoulli, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.dirichlet", modulecode_torch$distributions$dirichlet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.distribution", modulecode_torch$distributions$distribution, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.exp_family", modulecode_torch$distributions$exp_family, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.exponential", modulecode_torch$distributions$exponential, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.fishersnedecor", modulecode_torch$distributions$fishersnedecor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.gamma", modulecode_torch$distributions$gamma, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.geometric", modulecode_torch$distributions$geometric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.gumbel", modulecode_torch$distributions$gumbel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.half_cauchy", modulecode_torch$distributions$half_cauchy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.half_normal", modulecode_torch$distributions$half_normal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.independent", modulecode_torch$distributions$independent, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.kl", modulecode_torch$distributions$kl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.kumaraswamy", modulecode_torch$distributions$kumaraswamy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.laplace", modulecode_torch$distributions$laplace, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.lkj_cholesky", modulecode_torch$distributions$lkj_cholesky, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.log_normal", modulecode_torch$distributions$log_normal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.logistic_normal", modulecode_torch$distributions$logistic_normal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.lowrank_multivariate_normal", modulecode_torch$distributions$lowrank_multivariate_normal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.mixture_same_family", modulecode_torch$distributions$mixture_same_family, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.multinomial", modulecode_torch$distributions$multinomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.multivariate_normal", modulecode_torch$distributions$multivariate_normal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.negative_binomial", modulecode_torch$distributions$negative_binomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.normal", modulecode_torch$distributions$normal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.one_hot_categorical", modulecode_torch$distributions$one_hot_categorical, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.pareto", modulecode_torch$distributions$pareto, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.poisson", modulecode_torch$distributions$poisson, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.relaxed_bernoulli", modulecode_torch$distributions$relaxed_bernoulli, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.relaxed_categorical", modulecode_torch$distributions$relaxed_categorical, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.studentT", modulecode_torch$distributions$studentT, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.transformed_distribution", modulecode_torch$distributions$transformed_distribution, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.transforms", modulecode_torch$distributions$transforms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.uniform", modulecode_torch$distributions$uniform, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.utils", modulecode_torch$distributions$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.von_mises", modulecode_torch$distributions$von_mises, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.weibull", modulecode_torch$distributions$weibull, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.distributions.wishart", modulecode_torch$distributions$wishart, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.fft", modulecode_torch$fft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.functional", modulecode_torch$functional, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.futures", modulecode_torch$futures, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.fx", modulecode_torch$fx, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.fx._compatibility", modulecode_torch$fx$_compatibility, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.fx._pytree", modulecode_torch$fx$_pytree, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.fx._symbolic_trace", modulecode_torch$fx$_symbolic_trace, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.fx.graph", modulecode_torch$fx$graph, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.fx.graph_module", modulecode_torch$fx$graph_module, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.fx.immutable_collections", modulecode_torch$fx$immutable_collections, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.fx.interpreter", modulecode_torch$fx$interpreter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.fx.node", modulecode_torch$fx$node, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.fx.operator_schemas", modulecode_torch$fx$operator_schemas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.fx.proxy", modulecode_torch$fx$proxy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.fx.subgraph_rewriter", modulecode_torch$fx$subgraph_rewriter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.hub", modulecode_torch$hub, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.jit", modulecode_torch$jit, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.jit._async", modulecode_torch$jit$_async, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.jit._builtins", modulecode_torch$jit$_builtins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.jit._check", modulecode_torch$jit$_check, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.jit._freeze", modulecode_torch$jit$_freeze, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.jit._fuser", modulecode_torch$jit$_fuser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.jit._monkeytype_config", modulecode_torch$jit$_monkeytype_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.jit._recursive", modulecode_torch$jit$_recursive, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.jit._script", modulecode_torch$jit$_script, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.jit._serialization", modulecode_torch$jit$_serialization, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.jit._state", modulecode_torch$jit$_state, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.jit._state-preLoad", modulecode_torch$jit$_state$$45$preLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.jit._trace", modulecode_torch$jit$_trace, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.jit.annotations", modulecode_torch$jit$annotations, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.jit.frontend", modulecode_torch$jit$frontend, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.linalg", modulecode_torch$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.multiprocessing", modulecode_torch$multiprocessing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.multiprocessing._atfork", modulecode_torch$multiprocessing$_atfork, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.multiprocessing.reductions", modulecode_torch$multiprocessing$reductions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.multiprocessing.spawn", modulecode_torch$multiprocessing$spawn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn", modulecode_torch$nn, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn._reduction", modulecode_torch$nn$_reduction, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.common_types", modulecode_torch$nn$common_types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.functional", modulecode_torch$nn$functional, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.grad", modulecode_torch$nn$grad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.init", modulecode_torch$nn$init, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.intrinsic", modulecode_torch$nn$intrinsic, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.intrinsic.modules", modulecode_torch$nn$intrinsic$modules, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.intrinsic.modules.fused", modulecode_torch$nn$intrinsic$modules$fused, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.intrinsic.qat", modulecode_torch$nn$intrinsic$qat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.intrinsic.qat.modules", modulecode_torch$nn$intrinsic$qat$modules, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.intrinsic.qat.modules.conv_fused", modulecode_torch$nn$intrinsic$qat$modules$conv_fused, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.intrinsic.qat.modules.linear_relu", modulecode_torch$nn$intrinsic$qat$modules$linear_relu, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.intrinsic.quantized", modulecode_torch$nn$intrinsic$quantized, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.intrinsic.quantized.dynamic", modulecode_torch$nn$intrinsic$quantized$dynamic, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.intrinsic.quantized.dynamic.modules", modulecode_torch$nn$intrinsic$quantized$dynamic$modules, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.intrinsic.quantized.dynamic.modules.linear_relu", modulecode_torch$nn$intrinsic$quantized$dynamic$modules$linear_relu, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.intrinsic.quantized.modules", modulecode_torch$nn$intrinsic$quantized$modules, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.intrinsic.quantized.modules.bn_relu", modulecode_torch$nn$intrinsic$quantized$modules$bn_relu, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.intrinsic.quantized.modules.conv_relu", modulecode_torch$nn$intrinsic$quantized$modules$conv_relu, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.intrinsic.quantized.modules.linear_relu", modulecode_torch$nn$intrinsic$quantized$modules$linear_relu, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules", modulecode_torch$nn$modules, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules._functions", modulecode_torch$nn$modules$_functions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.activation", modulecode_torch$nn$modules$activation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.adaptive", modulecode_torch$nn$modules$adaptive, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.batchnorm", modulecode_torch$nn$modules$batchnorm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.channelshuffle", modulecode_torch$nn$modules$channelshuffle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.container", modulecode_torch$nn$modules$container, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.conv", modulecode_torch$nn$modules$conv, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.distance", modulecode_torch$nn$modules$distance, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.dropout", modulecode_torch$nn$modules$dropout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.flatten", modulecode_torch$nn$modules$flatten, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.fold", modulecode_torch$nn$modules$fold, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.instancenorm", modulecode_torch$nn$modules$instancenorm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.lazy", modulecode_torch$nn$modules$lazy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.linear", modulecode_torch$nn$modules$linear, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.loss", modulecode_torch$nn$modules$loss, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.module", modulecode_torch$nn$modules$module, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.normalization", modulecode_torch$nn$modules$normalization, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.padding", modulecode_torch$nn$modules$padding, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.pixelshuffle", modulecode_torch$nn$modules$pixelshuffle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.pooling", modulecode_torch$nn$modules$pooling, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.rnn", modulecode_torch$nn$modules$rnn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.sparse", modulecode_torch$nn$modules$sparse, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.transformer", modulecode_torch$nn$modules$transformer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.upsampling", modulecode_torch$nn$modules$upsampling, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.modules.utils", modulecode_torch$nn$modules$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.parallel", modulecode_torch$nn$parallel, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.parallel._functions", modulecode_torch$nn$parallel$_functions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.parallel.comm", modulecode_torch$nn$parallel$comm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.parallel.data_parallel", modulecode_torch$nn$parallel$data_parallel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.parallel.distributed", modulecode_torch$nn$parallel$distributed, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.parallel.parallel_apply", modulecode_torch$nn$parallel$parallel_apply, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.parallel.replicate", modulecode_torch$nn$parallel$replicate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.parallel.scatter_gather", modulecode_torch$nn$parallel$scatter_gather, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.parameter", modulecode_torch$nn$parameter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.qat", modulecode_torch$nn$qat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.qat.dynamic", modulecode_torch$nn$qat$dynamic, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.qat.dynamic.modules", modulecode_torch$nn$qat$dynamic$modules, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.qat.dynamic.modules.linear", modulecode_torch$nn$qat$dynamic$modules$linear, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.qat.modules", modulecode_torch$nn$qat$modules, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.qat.modules.conv", modulecode_torch$nn$qat$modules$conv, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.qat.modules.embedding_ops", modulecode_torch$nn$qat$modules$embedding_ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.qat.modules.linear", modulecode_torch$nn$qat$modules$linear, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantizable", modulecode_torch$nn$quantizable, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantizable.modules", modulecode_torch$nn$quantizable$modules, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantizable.modules.activation", modulecode_torch$nn$quantizable$modules$activation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantizable.modules.rnn", modulecode_torch$nn$quantizable$modules$rnn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized", modulecode_torch$nn$quantized, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized._reference", modulecode_torch$nn$quantized$_reference, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized._reference.modules", modulecode_torch$nn$quantized$_reference$modules, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized._reference.modules.conv", modulecode_torch$nn$quantized$_reference$modules$conv, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized._reference.modules.linear", modulecode_torch$nn$quantized$_reference$modules$linear, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized._reference.modules.utils", modulecode_torch$nn$quantized$_reference$modules$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized.dynamic", modulecode_torch$nn$quantized$dynamic, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized.dynamic.modules", modulecode_torch$nn$quantized$dynamic$modules, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized.dynamic.modules.conv", modulecode_torch$nn$quantized$dynamic$modules$conv, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized.dynamic.modules.linear", modulecode_torch$nn$quantized$dynamic$modules$linear, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized.dynamic.modules.rnn", modulecode_torch$nn$quantized$dynamic$modules$rnn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized.functional", modulecode_torch$nn$quantized$functional, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized.modules", modulecode_torch$nn$quantized$modules, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized.modules.activation", modulecode_torch$nn$quantized$modules$activation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized.modules.batchnorm", modulecode_torch$nn$quantized$modules$batchnorm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized.modules.conv", modulecode_torch$nn$quantized$modules$conv, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized.modules.dropout", modulecode_torch$nn$quantized$modules$dropout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized.modules.embedding_ops", modulecode_torch$nn$quantized$modules$embedding_ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized.modules.functional_modules", modulecode_torch$nn$quantized$modules$functional_modules, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized.modules.linear", modulecode_torch$nn$quantized$modules$linear, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized.modules.normalization", modulecode_torch$nn$quantized$modules$normalization, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.quantized.modules.utils", modulecode_torch$nn$quantized$modules$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.utils", modulecode_torch$nn$utils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.utils.clip_grad", modulecode_torch$nn$utils$clip_grad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.utils.convert_parameters", modulecode_torch$nn$utils$convert_parameters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.utils.fusion", modulecode_torch$nn$utils$fusion, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.utils.init", modulecode_torch$nn$utils$init, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.utils.memory_format", modulecode_torch$nn$utils$memory_format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.utils.parametrizations", modulecode_torch$nn$utils$parametrizations, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.utils.parametrize", modulecode_torch$nn$utils$parametrize, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.utils.rnn", modulecode_torch$nn$utils$rnn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.utils.spectral_norm", modulecode_torch$nn$utils$spectral_norm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.nn.utils.weight_norm", modulecode_torch$nn$utils$weight_norm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.onnx", modulecode_torch$onnx, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.onnx.operators", modulecode_torch$onnx$operators, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.onnx.symbolic_caffe2", modulecode_torch$onnx$symbolic_caffe2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.onnx.symbolic_helper", modulecode_torch$onnx$symbolic_helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.onnx.symbolic_opset10", modulecode_torch$onnx$symbolic_opset10, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.onnx.symbolic_opset11", modulecode_torch$onnx$symbolic_opset11, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.onnx.symbolic_opset12", modulecode_torch$onnx$symbolic_opset12, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.onnx.symbolic_opset13", modulecode_torch$onnx$symbolic_opset13, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.onnx.symbolic_opset14", modulecode_torch$onnx$symbolic_opset14, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.onnx.symbolic_opset15", modulecode_torch$onnx$symbolic_opset15, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.onnx.symbolic_opset7", modulecode_torch$onnx$symbolic_opset7, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.onnx.symbolic_opset8", modulecode_torch$onnx$symbolic_opset8, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.onnx.symbolic_opset9", modulecode_torch$onnx$symbolic_opset9, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.onnx.symbolic_registry", modulecode_torch$onnx$symbolic_registry, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.onnx.utils", modulecode_torch$onnx$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim", modulecode_torch$optim, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim._functional", modulecode_torch$optim$_functional, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim._multi_tensor", modulecode_torch$optim$_multi_tensor, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim._multi_tensor._functional", modulecode_torch$optim$_multi_tensor$_functional, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim._multi_tensor.adadelta", modulecode_torch$optim$_multi_tensor$adadelta, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim._multi_tensor.adagrad", modulecode_torch$optim$_multi_tensor$adagrad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim._multi_tensor.adam", modulecode_torch$optim$_multi_tensor$adam, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim._multi_tensor.adamax", modulecode_torch$optim$_multi_tensor$adamax, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim._multi_tensor.adamw", modulecode_torch$optim$_multi_tensor$adamw, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim._multi_tensor.asgd", modulecode_torch$optim$_multi_tensor$asgd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim._multi_tensor.nadam", modulecode_torch$optim$_multi_tensor$nadam, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim._multi_tensor.radam", modulecode_torch$optim$_multi_tensor$radam, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim._multi_tensor.rmsprop", modulecode_torch$optim$_multi_tensor$rmsprop, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim._multi_tensor.rprop", modulecode_torch$optim$_multi_tensor$rprop, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim._multi_tensor.sgd", modulecode_torch$optim$_multi_tensor$sgd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim.adadelta", modulecode_torch$optim$adadelta, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim.adagrad", modulecode_torch$optim$adagrad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim.adam", modulecode_torch$optim$adam, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim.adamax", modulecode_torch$optim$adamax, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim.adamw", modulecode_torch$optim$adamw, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim.asgd", modulecode_torch$optim$asgd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim.lbfgs", modulecode_torch$optim$lbfgs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim.lr_scheduler", modulecode_torch$optim$lr_scheduler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim.nadam", modulecode_torch$optim$nadam, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim.optimizer", modulecode_torch$optim$optimizer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim.radam", modulecode_torch$optim$radam, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim.rmsprop", modulecode_torch$optim$rmsprop, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim.rprop", modulecode_torch$optim$rprop, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim.sgd", modulecode_torch$optim$sgd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim.sparse_adam", modulecode_torch$optim$sparse_adam, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.optim.swa_utils", modulecode_torch$optim$swa_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.overrides", modulecode_torch$overrides, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.package", modulecode_torch$package, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.package._digraph", modulecode_torch$package$_digraph, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.package._directory_reader", modulecode_torch$package$_directory_reader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.package._importlib", modulecode_torch$package$_importlib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.package._mangling", modulecode_torch$package$_mangling, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.package._package_pickler", modulecode_torch$package$_package_pickler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.package._package_unpickler", modulecode_torch$package$_package_unpickler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.package._stdlib", modulecode_torch$package$_stdlib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.package.analyze", modulecode_torch$package$analyze, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.package.analyze.is_from_package", modulecode_torch$package$analyze$is_from_package, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.package.analyze.trace_dependencies", modulecode_torch$package$analyze$trace_dependencies, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.package.file_structure_representation", modulecode_torch$package$file_structure_representation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.package.find_file_dependencies", modulecode_torch$package$find_file_dependencies, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.package.glob_group", modulecode_torch$package$glob_group, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.package.importer", modulecode_torch$package$importer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.package.package_exporter", modulecode_torch$package$package_exporter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.package.package_importer", modulecode_torch$package$package_importer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.profiler", modulecode_torch$profiler, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.profiler.profiler", modulecode_torch$profiler$profiler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.quantization", modulecode_torch$quantization, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.quantization.fake_quantize", modulecode_torch$quantization$fake_quantize, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.quantization.fuse_modules", modulecode_torch$quantization$fuse_modules, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.quantization.fuser_method_mappings", modulecode_torch$quantization$fuser_method_mappings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.quantization.observer", modulecode_torch$quantization$observer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.quantization.qconfig", modulecode_torch$quantization$qconfig, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.quantization.quant_type", modulecode_torch$quantization$quant_type, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.quantization.quantization_mappings", modulecode_torch$quantization$quantization_mappings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.quantization.quantize", modulecode_torch$quantization$quantize, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.quantization.quantize_jit", modulecode_torch$quantization$quantize_jit, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.quantization.stubs", modulecode_torch$quantization$stubs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.quasirandom", modulecode_torch$quasirandom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.random", modulecode_torch$random, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.return_types", modulecode_torch$return_types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.serialization", modulecode_torch$serialization, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.sparse", modulecode_torch$sparse, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.special", modulecode_torch$special, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.storage", modulecode_torch$storage, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.testing", modulecode_torch$testing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.testing._comparison", modulecode_torch$testing$_comparison, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.testing._core", modulecode_torch$testing$_core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.testing._creation", modulecode_torch$testing$_creation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.testing._deprecated", modulecode_torch$testing$_deprecated, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.testing._legacy", modulecode_torch$testing$_legacy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.torch_version", modulecode_torch$torch_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.types", modulecode_torch$types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils", modulecode_torch$utils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils._crash_handler", modulecode_torch$utils$_crash_handler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils._pytree", modulecode_torch$utils$_pytree, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.backcompat", modulecode_torch$utils$backcompat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.checkpoint", modulecode_torch$utils$checkpoint, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data", modulecode_torch$utils$data, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data._decorator", modulecode_torch$utils$data$_decorator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data._typing", modulecode_torch$utils$data$_typing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data._utils", modulecode_torch$utils$data$_utils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data._utils.collate", modulecode_torch$utils$data$_utils$collate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data._utils.fetch", modulecode_torch$utils$data$_utils$fetch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data._utils.pin_memory", modulecode_torch$utils$data$_utils$pin_memory, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data._utils.signal_handling", modulecode_torch$utils$data$_utils$signal_handling, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data._utils.worker", modulecode_torch$utils$data$_utils$worker, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.backward_compatibility", modulecode_torch$utils$data$backward_compatibility, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.communication", modulecode_torch$utils$data$communication, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.communication.eventloop", modulecode_torch$utils$data$communication$eventloop, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.communication.iter", modulecode_torch$utils$data$communication$iter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.communication.map", modulecode_torch$utils$data$communication$map, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.communication.messages", modulecode_torch$utils$data$communication$messages, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.communication.protocol", modulecode_torch$utils$data$communication$protocol, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.communication.queue", modulecode_torch$utils$data$communication$queue, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.dataloader", modulecode_torch$utils$data$dataloader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.dataloader_experimental", modulecode_torch$utils$data$dataloader_experimental, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes", modulecode_torch$utils$data$datapipes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.dataframe", modulecode_torch$utils$data$datapipes$dataframe, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.dataframe.dataframe_wrapper", modulecode_torch$utils$data$datapipes$dataframe$dataframe_wrapper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.dataframe.dataframes", modulecode_torch$utils$data$datapipes$dataframe$dataframes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.dataframe.datapipes", modulecode_torch$utils$data$datapipes$dataframe$datapipes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.dataframe.structures", modulecode_torch$utils$data$datapipes$dataframe$structures, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.iter", modulecode_torch$utils$data$datapipes$iter, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.iter.callable", modulecode_torch$utils$data$datapipes$iter$callable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.iter.combinatorics", modulecode_torch$utils$data$datapipes$iter$combinatorics, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.iter.combining", modulecode_torch$utils$data$datapipes$iter$combining, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.iter.filelister", modulecode_torch$utils$data$datapipes$iter$filelister, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.iter.fileopener", modulecode_torch$utils$data$datapipes$iter$fileopener, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.iter.grouping", modulecode_torch$utils$data$datapipes$iter$grouping, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.iter.routeddecoder", modulecode_torch$utils$data$datapipes$iter$routeddecoder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.iter.selecting", modulecode_torch$utils$data$datapipes$iter$selecting, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.iter.streamreader", modulecode_torch$utils$data$datapipes$iter$streamreader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.iter.utils", modulecode_torch$utils$data$datapipes$iter$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.map", modulecode_torch$utils$data$datapipes$map, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.map.callable", modulecode_torch$utils$data$datapipes$map$callable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.map.combinatorics", modulecode_torch$utils$data$datapipes$map$combinatorics, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.map.combining", modulecode_torch$utils$data$datapipes$map$combining, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.map.grouping", modulecode_torch$utils$data$datapipes$map$grouping, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.map.utils", modulecode_torch$utils$data$datapipes$map$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.utils", modulecode_torch$utils$data$datapipes$utils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.utils.common", modulecode_torch$utils$data$datapipes$utils$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.datapipes.utils.decoder", modulecode_torch$utils$data$datapipes$utils$decoder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.dataset", modulecode_torch$utils$data$dataset, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.distributed", modulecode_torch$utils$data$distributed, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.graph", modulecode_torch$utils$data$graph, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.graph_settings", modulecode_torch$utils$data$graph_settings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.data.sampler", modulecode_torch$utils$data$sampler, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.dlpack", modulecode_torch$utils$dlpack, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.hooks", modulecode_torch$utils$hooks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.model_zoo", modulecode_torch$utils$model_zoo, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.utils.throughput_benchmark", modulecode_torch$utils$throughput_benchmark, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torch.version", modulecode_torch$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision", modulecode_torchvision, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision._C", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision._internally_replaced_utils", modulecode_torchvision$_internally_replaced_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets", modulecode_torchvision$datasets, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets._optical_flow", modulecode_torchvision$datasets$_optical_flow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.caltech", modulecode_torchvision$datasets$caltech, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.celeba", modulecode_torchvision$datasets$celeba, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.cifar", modulecode_torchvision$datasets$cifar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.cityscapes", modulecode_torchvision$datasets$cityscapes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.clevr", modulecode_torchvision$datasets$clevr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.coco", modulecode_torchvision$datasets$coco, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.country211", modulecode_torchvision$datasets$country211, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.dtd", modulecode_torchvision$datasets$dtd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.eurosat", modulecode_torchvision$datasets$eurosat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.fakedata", modulecode_torchvision$datasets$fakedata, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.fer2013", modulecode_torchvision$datasets$fer2013, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.fgvc_aircraft", modulecode_torchvision$datasets$fgvc_aircraft, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.flickr", modulecode_torchvision$datasets$flickr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.flowers102", modulecode_torchvision$datasets$flowers102, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.folder", modulecode_torchvision$datasets$folder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.food101", modulecode_torchvision$datasets$food101, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.gtsrb", modulecode_torchvision$datasets$gtsrb, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.hmdb51", modulecode_torchvision$datasets$hmdb51, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.imagenet", modulecode_torchvision$datasets$imagenet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.inaturalist", modulecode_torchvision$datasets$inaturalist, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.kinetics", modulecode_torchvision$datasets$kinetics, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.kitti", modulecode_torchvision$datasets$kitti, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.lfw", modulecode_torchvision$datasets$lfw, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.lsun", modulecode_torchvision$datasets$lsun, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.mnist", modulecode_torchvision$datasets$mnist, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.omniglot", modulecode_torchvision$datasets$omniglot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.oxford_iiit_pet", modulecode_torchvision$datasets$oxford_iiit_pet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.pcam", modulecode_torchvision$datasets$pcam, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.phototour", modulecode_torchvision$datasets$phototour, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.places365", modulecode_torchvision$datasets$places365, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.rendered_sst2", modulecode_torchvision$datasets$rendered_sst2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.sbd", modulecode_torchvision$datasets$sbd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.sbu", modulecode_torchvision$datasets$sbu, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.semeion", modulecode_torchvision$datasets$semeion, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.stanford_cars", modulecode_torchvision$datasets$stanford_cars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.stl10", modulecode_torchvision$datasets$stl10, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.sun397", modulecode_torchvision$datasets$sun397, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.svhn", modulecode_torchvision$datasets$svhn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.ucf101", modulecode_torchvision$datasets$ucf101, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.usps", modulecode_torchvision$datasets$usps, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.utils", modulecode_torchvision$datasets$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.video_utils", modulecode_torchvision$datasets$video_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.vision", modulecode_torchvision$datasets$vision, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.voc", modulecode_torchvision$datasets$voc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.datasets.widerface", modulecode_torchvision$datasets$widerface, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.extension", modulecode_torchvision$extension, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.image", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.io", modulecode_torchvision$io, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.io._load_gpu_decoder", modulecode_torchvision$io$_load_gpu_decoder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.io._video_opt", modulecode_torchvision$io$_video_opt, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.io.image", modulecode_torchvision$io$image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.io.video", modulecode_torchvision$io$video, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models", modulecode_torchvision$models, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models._utils", modulecode_torchvision$models$_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.alexnet", modulecode_torchvision$models$alexnet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.convnext", modulecode_torchvision$models$convnext, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.densenet", modulecode_torchvision$models$densenet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.detection", modulecode_torchvision$models$detection, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.detection._utils", modulecode_torchvision$models$detection$_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.detection.anchor_utils", modulecode_torchvision$models$detection$anchor_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.detection.backbone_utils", modulecode_torchvision$models$detection$backbone_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.detection.faster_rcnn", modulecode_torchvision$models$detection$faster_rcnn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.detection.fcos", modulecode_torchvision$models$detection$fcos, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.detection.generalized_rcnn", modulecode_torchvision$models$detection$generalized_rcnn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.detection.image_list", modulecode_torchvision$models$detection$image_list, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.detection.keypoint_rcnn", modulecode_torchvision$models$detection$keypoint_rcnn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.detection.mask_rcnn", modulecode_torchvision$models$detection$mask_rcnn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.detection.retinanet", modulecode_torchvision$models$detection$retinanet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.detection.roi_heads", modulecode_torchvision$models$detection$roi_heads, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.detection.rpn", modulecode_torchvision$models$detection$rpn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.detection.ssd", modulecode_torchvision$models$detection$ssd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.detection.ssdlite", modulecode_torchvision$models$detection$ssdlite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.detection.transform", modulecode_torchvision$models$detection$transform, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.efficientnet", modulecode_torchvision$models$efficientnet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.feature_extraction", modulecode_torchvision$models$feature_extraction, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.googlenet", modulecode_torchvision$models$googlenet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.inception", modulecode_torchvision$models$inception, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.mnasnet", modulecode_torchvision$models$mnasnet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.mobilenet", modulecode_torchvision$models$mobilenet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.mobilenetv2", modulecode_torchvision$models$mobilenetv2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.mobilenetv3", modulecode_torchvision$models$mobilenetv3, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.optical_flow", modulecode_torchvision$models$optical_flow, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.optical_flow._utils", modulecode_torchvision$models$optical_flow$_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.optical_flow.raft", modulecode_torchvision$models$optical_flow$raft, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.quantization", modulecode_torchvision$models$quantization, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.quantization.googlenet", modulecode_torchvision$models$quantization$googlenet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.quantization.inception", modulecode_torchvision$models$quantization$inception, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.quantization.mobilenet", modulecode_torchvision$models$quantization$mobilenet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.quantization.mobilenetv2", modulecode_torchvision$models$quantization$mobilenetv2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.quantization.mobilenetv3", modulecode_torchvision$models$quantization$mobilenetv3, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.quantization.resnet", modulecode_torchvision$models$quantization$resnet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.quantization.shufflenetv2", modulecode_torchvision$models$quantization$shufflenetv2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.quantization.utils", modulecode_torchvision$models$quantization$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.regnet", modulecode_torchvision$models$regnet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.resnet", modulecode_torchvision$models$resnet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.segmentation", modulecode_torchvision$models$segmentation, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.segmentation._utils", modulecode_torchvision$models$segmentation$_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.segmentation.deeplabv3", modulecode_torchvision$models$segmentation$deeplabv3, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.segmentation.fcn", modulecode_torchvision$models$segmentation$fcn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.segmentation.lraspp", modulecode_torchvision$models$segmentation$lraspp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.shufflenetv2", modulecode_torchvision$models$shufflenetv2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.squeezenet", modulecode_torchvision$models$squeezenet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.vgg", modulecode_torchvision$models$vgg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.video", modulecode_torchvision$models$video, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.video.resnet", modulecode_torchvision$models$video$resnet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.models.vision_transformer", modulecode_torchvision$models$vision_transformer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.ops", modulecode_torchvision$ops, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.ops._box_convert", modulecode_torchvision$ops$_box_convert, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.ops._register_onnx_ops", modulecode_torchvision$ops$_register_onnx_ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.ops._utils", modulecode_torchvision$ops$_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.ops.boxes", modulecode_torchvision$ops$boxes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.ops.deform_conv", modulecode_torchvision$ops$deform_conv, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.ops.feature_pyramid_network", modulecode_torchvision$ops$feature_pyramid_network, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.ops.focal_loss", modulecode_torchvision$ops$focal_loss, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.ops.giou_loss", modulecode_torchvision$ops$giou_loss, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.ops.misc", modulecode_torchvision$ops$misc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.ops.poolers", modulecode_torchvision$ops$poolers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.ops.ps_roi_align", modulecode_torchvision$ops$ps_roi_align, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.ops.ps_roi_pool", modulecode_torchvision$ops$ps_roi_pool, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.ops.roi_align", modulecode_torchvision$ops$roi_align, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.ops.roi_pool", modulecode_torchvision$ops$roi_pool, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.ops.stochastic_depth", modulecode_torchvision$ops$stochastic_depth, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.transforms", modulecode_torchvision$transforms, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.transforms.autoaugment", modulecode_torchvision$transforms$autoaugment, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.transforms.functional", modulecode_torchvision$transforms$functional, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.transforms.functional_pil", modulecode_torchvision$transforms$functional_pil, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.transforms.functional_tensor", modulecode_torchvision$transforms$functional_tensor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.transforms.transforms", modulecode_torchvision$transforms$transforms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.utils", modulecode_torchvision$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"torchvision.version", modulecode_torchvision$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tqdm", modulecode_tqdm, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tqdm._dist_ver", modulecode_tqdm$_dist_ver, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tqdm._monitor", modulecode_tqdm$_monitor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tqdm._tqdm_pandas", modulecode_tqdm$_tqdm_pandas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tqdm.asyncio", modulecode_tqdm$asyncio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tqdm.auto", modulecode_tqdm$auto, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tqdm.autonotebook", modulecode_tqdm$autonotebook, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tqdm.cli", modulecode_tqdm$cli, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tqdm.gui", modulecode_tqdm$gui, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tqdm.std", modulecode_tqdm$std, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tqdm.utils", modulecode_tqdm$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tqdm.version", modulecode_tqdm$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"txtInfo", modulecode_txtInfo, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"typing_extensions", modulecode_typing_extensions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"unicodedata", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3", modulecode_urllib3, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3._base_connection", modulecode_urllib3$_base_connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3._collections", modulecode_urllib3$_collections, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3._request_methods", modulecode_urllib3$_request_methods, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3._version", modulecode_urllib3$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3.connection", modulecode_urllib3$connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3.connectionpool", modulecode_urllib3$connectionpool, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3.contrib", modulecode_urllib3$contrib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3.exceptions", modulecode_urllib3$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3.fields", modulecode_urllib3$fields, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3.filepost", modulecode_urllib3$filepost, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3.poolmanager", modulecode_urllib3$poolmanager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3.response", modulecode_urllib3$response, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3.util", modulecode_urllib3$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3.util.connection", modulecode_urllib3$util$connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3.util.proxy", modulecode_urllib3$util$proxy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3.util.request", modulecode_urllib3$util$request, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3.util.response", modulecode_urllib3$util$response, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3.util.retry", modulecode_urllib3$util$retry, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3.util.ssl_", modulecode_urllib3$util$ssl_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3.util.ssl_match_hostname", modulecode_urllib3$util$ssl_match_hostname, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3.util.ssltransport", modulecode_urllib3$util$ssltransport, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3.util.timeout", modulecode_urllib3$util$timeout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3.util.url", modulecode_urllib3$util$url, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3.util.util", modulecode_urllib3$util$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib3.util.wait", modulecode_urllib3$util$wait, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlrd", modulecode_xlrd, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlrd.biffh", modulecode_xlrd$biffh, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlrd.book", modulecode_xlrd$book, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlrd.compdoc", modulecode_xlrd$compdoc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlrd.formatting", modulecode_xlrd$formatting, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlrd.formula", modulecode_xlrd$formula, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlrd.info", modulecode_xlrd$info, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlrd.sheet", modulecode_xlrd$sheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlrd.timemachine", modulecode_xlrd$timemachine, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlrd.xldate", modulecode_xlrd$xldate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlrd.xlsx", modulecode_xlrd$xlsx, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlutils", modulecode_xlutils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlutils.compat", modulecode_xlutils$compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlutils.copy", modulecode_xlutils$copy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlutils.display", modulecode_xlutils$display, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlutils.filter", modulecode_xlutils$filter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlutils.margins", modulecode_xlutils$margins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlwt", modulecode_xlwt, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlwt.BIFFRecords", modulecode_xlwt$BIFFRecords, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlwt.Bitmap", modulecode_xlwt$Bitmap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlwt.Cell", modulecode_xlwt$Cell, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlwt.Column", modulecode_xlwt$Column, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlwt.CompoundDoc", modulecode_xlwt$CompoundDoc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlwt.ExcelFormula", modulecode_xlwt$ExcelFormula, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlwt.ExcelFormulaLexer", modulecode_xlwt$ExcelFormulaLexer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlwt.ExcelFormulaParser", modulecode_xlwt$ExcelFormulaParser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlwt.ExcelMagic", modulecode_xlwt$ExcelMagic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlwt.Formatting", modulecode_xlwt$Formatting, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlwt.Row", modulecode_xlwt$Row, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlwt.Style", modulecode_xlwt$Style, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlwt.UnicodeUtils", modulecode_xlwt$UnicodeUtils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlwt.Utils", modulecode_xlwt$Utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlwt.Workbook", modulecode_xlwt$Workbook, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlwt.Worksheet", modulecode_xlwt$Worksheet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlwt.antlr", modulecode_xlwt$antlr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xlwt.compat", modulecode_xlwt$compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zipp", modulecode_zipp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zstandard", modulecode_zstandard, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zstandard._cffi", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zstandard.backend_c", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zstandard.backend_cffi", modulecode_zstandard$backend_cffi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__future__", NULL, 156, 4079, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_bootlocale", NULL, 157, 1196, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_collections_abc", NULL, 158, 28889, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_compat_pickle", NULL, 159, 5755, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_compression", NULL, 160, 4071, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_dummy_thread", NULL, 161, 5936, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_markupbase", NULL, 162, 7732, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_osx_support", NULL, 163, 9542, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_py_abc", NULL, 164, 4601, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyio", NULL, 165, 72894, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_sitebuiltins", NULL, 166, 3412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_strptime", NULL, 167, 16051, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_threading_local", NULL, 168, 6359, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_weakrefset", NULL, 169, 7409, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"abc", NULL, 170, 6398, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"aifc", NULL, 171, 26090, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ast", NULL, 172, 11683, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"base64", NULL, 173, 16935, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"binhex", NULL, 174, 12006, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bisect", NULL, 175, 2645, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bz2", NULL, 176, 11128, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"calendar", NULL, 177, 27371, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cgi", NULL, 178, 27181, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cgitb", NULL, 179, 10059, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"chunk", NULL, 180, 4866, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cmd", NULL, 181, 12537, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"code", NULL, 182, 9805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"codecs", NULL, 183, 34022, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"codeop", NULL, 184, 6257, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"collections", NULL, 185, 47030, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"collections.abc", NULL, 186, 28888, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"colorsys", NULL, 187, 3244, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"configparser", NULL, 188, 45827, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"contextlib", NULL, 189, 20405, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"contextvars", NULL, 190, 204, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"copy", NULL, 191, 7048, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"copyreg", NULL, 192, 4191, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"csv", NULL, 193, 11779, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes", NULL, 194, 16317, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes._aix", NULL, 195, 9770, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes._endian", NULL, 196, 1903, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes.macholib", NULL, 197, 251, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes.macholib.dyld", NULL, 198, 4307, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes.macholib.dylib", NULL, 199, 1887, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes.macholib.framework", NULL, 200, 2167, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes.util", NULL, 201, 7696, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes.wintypes", NULL, 202, 5064, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dataclasses", NULL, 203, 22971, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"datetime", NULL, 204, 57174, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"decimal", NULL, 205, 162116, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"difflib", NULL, 206, 59391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dis", NULL, 207, 15152, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dummy_threading", NULL, 208, 1071, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings", NULL, 209, 3885, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.aliases", NULL, 210, 6243, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.ascii", NULL, 211, 1831, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.base64_codec", NULL, 212, 2370, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.big5", NULL, 213, 1391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.big5hkscs", NULL, 214, 1401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.bz2_codec", NULL, 215, 3232, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.charmap", NULL, 216, 2884, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp037", NULL, 217, 2376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1006", NULL, 218, 2452, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1026", NULL, 219, 2380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1125", NULL, 220, 8073, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1140", NULL, 221, 2366, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1250", NULL, 222, 2403, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1251", NULL, 223, 2400, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1252", NULL, 224, 2403, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1253", NULL, 225, 2416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1254", NULL, 226, 2405, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1255", NULL, 227, 2424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1256", NULL, 228, 2402, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1257", NULL, 229, 2410, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1258", NULL, 230, 2408, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp273", NULL, 231, 2362, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp424", NULL, 232, 2406, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp437", NULL, 233, 7790, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp500", NULL, 234, 2376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp65001", NULL, 235, 1630, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp720", NULL, 236, 2473, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp737", NULL, 237, 8112, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp775", NULL, 238, 7820, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp850", NULL, 239, 7451, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp852", NULL, 240, 7828, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp855", NULL, 241, 8081, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp856", NULL, 242, 2438, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp857", NULL, 243, 7433, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp858", NULL, 244, 7421, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp860", NULL, 245, 7769, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp861", NULL, 246, 7784, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp862", NULL, 247, 7973, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp863", NULL, 248, 7784, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp864", NULL, 249, 7930, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp865", NULL, 250, 7784, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp866", NULL, 251, 8117, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp869", NULL, 252, 7810, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp874", NULL, 253, 2504, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp875", NULL, 254, 2373, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp932", NULL, 255, 1393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp949", NULL, 256, 1393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp950", NULL, 257, 1393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.euc_jis_2004", NULL, 258, 1407, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.euc_jisx0213", NULL, 259, 1407, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.euc_jp", NULL, 260, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.euc_kr", NULL, 261, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.gb18030", NULL, 262, 1397, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.gb2312", NULL, 263, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.gbk", NULL, 264, 1389, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.hex_codec", NULL, 265, 2357, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.hp_roman8", NULL, 266, 2577, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.hz", NULL, 267, 1387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.idna", NULL, 268, 5671, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp", NULL, 269, 1408, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_1", NULL, 270, 1412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_2", NULL, 271, 1412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_2004", NULL, 272, 1418, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_3", NULL, 273, 1412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_ext", NULL, 274, 1416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_kr", NULL, 275, 1408, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_1", NULL, 276, 2375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_10", NULL, 277, 2380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_11", NULL, 278, 2474, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_13", NULL, 279, 2383, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_14", NULL, 280, 2401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_15", NULL, 281, 2380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_16", NULL, 282, 2382, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_2", NULL, 283, 2375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_3", NULL, 284, 2382, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_4", NULL, 285, 2375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_5", NULL, 286, 2376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_6", NULL, 287, 2420, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_7", NULL, 288, 2383, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_8", NULL, 289, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_9", NULL, 290, 2375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.johab", NULL, 291, 1393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.koi8_r", NULL, 292, 2427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.koi8_t", NULL, 293, 2338, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.koi8_u", NULL, 294, 2413, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.kz1048", NULL, 295, 2390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.latin_1", NULL, 296, 1843, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_arabic", NULL, 297, 7684, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_centeuro", NULL, 298, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_croatian", NULL, 299, 2422, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_cyrillic", NULL, 300, 2412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_farsi", NULL, 301, 2356, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_greek", NULL, 302, 2396, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_iceland", NULL, 303, 2415, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_latin2", NULL, 304, 2556, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_roman", NULL, 305, 2413, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_romanian", NULL, 306, 2423, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_turkish", NULL, 307, 2416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mbcs", NULL, 308, 1642, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.oem", NULL, 309, 1455, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.palmos", NULL, 310, 2403, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.ptcp154", NULL, 311, 2497, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.punycode", NULL, 312, 6364, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.quopri_codec", NULL, 313, 2390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.raw_unicode_escape", NULL, 314, 1716, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.rot_13", NULL, 315, 2976, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.shift_jis", NULL, 316, 1401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.shift_jis_2004", NULL, 317, 1411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.shift_jisx0213", NULL, 318, 1411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.tis_620", NULL, 319, 2465, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.undefined", NULL, 320, 2110, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.unicode_escape", NULL, 321, 1696, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.unicode_internal", NULL, 322, 1706, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_16", NULL, 323, 4780, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_16_be", NULL, 324, 1581, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_16_le", NULL, 325, 1581, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_32", NULL, 326, 4673, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_32_be", NULL, 327, 1474, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_32_le", NULL, 328, 1474, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_7", NULL, 329, 1502, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_8", NULL, 330, 1561, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_8_sig", NULL, 331, 4463, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.uu_codec", NULL, 332, 3223, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.zlib_codec", NULL, 333, 3070, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"enum", NULL, 334, 24217, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"filecmp", NULL, 335, 8254, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fileinput", NULL, 336, 13202, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fnmatch", NULL, 337, 3284, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"formatter", NULL, 338, 17500, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fractions", NULL, 339, 18375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ftplib", NULL, 340, 28014, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"functools", NULL, 341, 24178, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"genericpath", NULL, 342, 3851, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"getopt", NULL, 343, 6186, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"getpass", NULL, 344, 4111, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gettext", NULL, 345, 14115, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"glob", NULL, 346, 4206, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gzip", NULL, 347, 17132, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"hashlib", NULL, 348, 6538, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"heapq", NULL, 349, 14309, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"hmac", NULL, 350, 6060, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"html", NULL, 351, 3335, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"html.entities", NULL, 352, 50416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"html.parser", NULL, 353, 11054, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"imaplib", NULL, 354, 41377, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"imghdr", NULL, 355, 4089, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"imp", NULL, 356, 9700, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib", NULL, 357, 3670, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib._bootstrap", NULL, 358, 29125, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib._bootstrap_external", NULL, 359, 41765, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.abc", NULL, 360, 13434, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.machinery", NULL, 361, 919, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.resources", NULL, 362, 8286, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.util", NULL, 363, 9303, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"inspect", NULL, 364, 79990, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"io", NULL, 365, 3356, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ipaddress", NULL, 366, 62750, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"json", NULL, 367, 12276, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"json.decoder", NULL, 368, 9771, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"json.encoder", NULL, 369, 11253, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"json.scanner", NULL, 370, 1943, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"json.tool", NULL, 371, 1451, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"keyword", NULL, 372, 1756, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"linecache", NULL, 373, 3736, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"locale", NULL, 374, 34535, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"logging", NULL, 375, 62340, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"logging.config", NULL, 376, 22998, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"logging.handlers", NULL, 377, 42979, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"lzma", NULL, 378, 11886, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"macpath", NULL, 379, 5754, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"mailbox", NULL, 380, 63595, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"mailcap", NULL, 381, 6431, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"mimetypes", NULL, 382, 15674, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"modulefinder", NULL, 383, 15299, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"netrc", NULL, 384, 3710, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ntpath", NULL, 385, 12951, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"nturl2path", NULL, 386, 1562, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numbers", NULL, 387, 12139, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"opcode", NULL, 388, 5325, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"operator", NULL, 389, 13847, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"os", NULL, 390, 29671, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pathlib", NULL, 391, 42161, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pickle", NULL, 392, 42988, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pickletools", NULL, 393, 65278, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pipes", NULL, 394, 7750, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkgutil", NULL, 395, 16307, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"platform", NULL, 396, 28111, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"poplib", NULL, 397, 13283, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"posixpath", NULL, 398, 10376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pprint", NULL, 399, 15780, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pstats", NULL, 400, 22241, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyclbr", NULL, 401, 10320, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"queue", NULL, 402, 11419, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"quopri", NULL, 403, 5718, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"random", NULL, 404, 19355, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"re", NULL, 405, 13751, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"reprlib", NULL, 406, 5297, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rlcompleter", NULL, 407, 5694, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sched", NULL, 408, 6468, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"secrets", NULL, 409, 2131, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"selectors", NULL, 410, 16895, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"shelve", NULL, 411, 9453, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"shlex", NULL, 412, 7132, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"shutil", NULL, 413, 30927, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"signal", NULL, 414, 2459, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"smtpd", NULL, 415, 26551, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sndhdr", NULL, 416, 6850, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"socket", NULL, 417, 21984, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"socketserver", NULL, 418, 24147, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sre_compile", NULL, 419, 15150, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sre_constants", NULL, 420, 6238, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sre_parse", NULL, 421, 21233, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ssl", NULL, 422, 39337, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"stat", NULL, 423, 4291, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"statistics", NULL, 424, 18111, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"string", NULL, 425, 7782, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"stringprep", NULL, 426, 9979, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"struct", NULL, 427, 281, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"subprocess", NULL, 428, 39136, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"symbol", NULL, 429, 2512, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"symtable", NULL, 430, 10392, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sysconfig", NULL, 431, 15391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tarfile", NULL, 432, 61788, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tempfile", NULL, 433, 22179, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"textwrap", NULL, 434, 13472, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"threading", NULL, 435, 37833, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"timeit", NULL, 436, 11594, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"token", NULL, 437, 3546, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tokenize", NULL, 438, 17778, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"trace", NULL, 439, 19349, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"traceback", NULL, 440, 19570, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tracemalloc", NULL, 441, 17223, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"types", NULL, 442, 8923, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"typing", NULL, 443, 50895, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib", NULL, 444, 80, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib.error", NULL, 445, 2723, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib.parse", NULL, 446, 30352, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib.request", NULL, 447, 72282, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib.response", NULL, 448, 3196, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib.robotparser", NULL, 449, 7036, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"uu", NULL, 450, 3572, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"uuid", NULL, 451, 23150, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"warnings", NULL, 452, 13887, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"wave", NULL, 453, 18236, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"weakref", NULL, 454, 19516, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"webbrowser", NULL, 455, 16321, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xdrlib", NULL, 456, 8271, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml", NULL, 457, 644, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.dom", NULL, 458, 5396, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.dom.NodeFilter", NULL, 459, 920, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.dom.domreg", NULL, 460, 2797, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.dom.expatbuilder", NULL, 461, 26967, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.dom.minicompat", NULL, 462, 2766, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.dom.minidom", NULL, 463, 55566, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.dom.pulldom", NULL, 464, 10439, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.dom.xmlbuilder", NULL, 465, 12386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.etree", NULL, 466, 83, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.etree.ElementInclude", NULL, 467, 1528, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.etree.ElementPath", NULL, 468, 6296, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.etree.ElementTree", NULL, 469, 44760, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.etree.cElementTree", NULL, 470, 134, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.parsers", NULL, 471, 257, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.parsers.expat", NULL, 472, 295, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.sax", NULL, 473, 3116, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.sax._exceptions", NULL, 474, 5434, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.sax.expatreader", NULL, 475, 12337, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.sax.handler", NULL, 476, 12310, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.sax.saxutils", NULL, 477, 12763, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.sax.xmlreader", NULL, 478, 16871, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xmlrpc", NULL, 479, 80, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xmlrpc.client", NULL, 480, 34495, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xmlrpc.server", NULL, 481, 29369, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zipapp", NULL, 482, 5750, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zipfile", NULL, 483, 50279, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(void) {
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {
    {"_collections_abc", 158, 28889},
    {"abc", 170, 6398},
    {"codecs", 183, 34022},
    {"collections", 185, -47030},
    {"collections.abc", 186, 28888},
    {"copyreg", 192, 4191},
    {"dis", 207, 15152},
    {"encodings", 209, -3885},
    {"encodings.aliases", 210, 6243},
    {"encodings.ascii", 211, 1831},
    {"encodings.big5", 213, 1391},
    {"encodings.big5hkscs", 214, 1401},
    {"encodings.charmap", 216, 2884},
    {"encodings.cp037", 217, 2376},
    {"encodings.cp1006", 218, 2452},
    {"encodings.cp1026", 219, 2380},
    {"encodings.cp1125", 220, 8073},
    {"encodings.cp1140", 221, 2366},
    {"encodings.cp1250", 222, 2403},
    {"encodings.cp1251", 223, 2400},
    {"encodings.cp1252", 224, 2403},
    {"encodings.cp1253", 225, 2416},
    {"encodings.cp1254", 226, 2405},
    {"encodings.cp1255", 227, 2424},
    {"encodings.cp1256", 228, 2402},
    {"encodings.cp1257", 229, 2410},
    {"encodings.cp1258", 230, 2408},
    {"encodings.cp273", 231, 2362},
    {"encodings.cp424", 232, 2406},
    {"encodings.cp437", 233, 7790},
    {"encodings.cp500", 234, 2376},
    {"encodings.cp65001", 235, 1630},
    {"encodings.cp720", 236, 2473},
    {"encodings.cp737", 237, 8112},
    {"encodings.cp775", 238, 7820},
    {"encodings.cp850", 239, 7451},
    {"encodings.cp852", 240, 7828},
    {"encodings.cp855", 241, 8081},
    {"encodings.cp856", 242, 2438},
    {"encodings.cp857", 243, 7433},
    {"encodings.cp858", 244, 7421},
    {"encodings.cp860", 245, 7769},
    {"encodings.cp861", 246, 7784},
    {"encodings.cp862", 247, 7973},
    {"encodings.cp863", 248, 7784},
    {"encodings.cp864", 249, 7930},
    {"encodings.cp865", 250, 7784},
    {"encodings.cp866", 251, 8117},
    {"encodings.cp869", 252, 7810},
    {"encodings.cp874", 253, 2504},
    {"encodings.cp875", 254, 2373},
    {"encodings.cp932", 255, 1393},
    {"encodings.cp949", 256, 1393},
    {"encodings.cp950", 257, 1393},
    {"encodings.euc_jis_2004", 258, 1407},
    {"encodings.euc_jisx0213", 259, 1407},
    {"encodings.euc_jp", 260, 1395},
    {"encodings.euc_kr", 261, 1395},
    {"encodings.gb18030", 262, 1397},
    {"encodings.gb2312", 263, 1395},
    {"encodings.gbk", 264, 1389},
    {"encodings.hp_roman8", 266, 2577},
    {"encodings.hz", 267, 1387},
    {"encodings.iso2022_jp", 269, 1408},
    {"encodings.iso2022_jp_1", 270, 1412},
    {"encodings.iso2022_jp_2", 271, 1412},
    {"encodings.iso2022_jp_2004", 272, 1418},
    {"encodings.iso2022_jp_3", 273, 1412},
    {"encodings.iso2022_jp_ext", 274, 1416},
    {"encodings.iso2022_kr", 275, 1408},
    {"encodings.iso8859_1", 276, 2375},
    {"encodings.iso8859_10", 277, 2380},
    {"encodings.iso8859_11", 278, 2474},
    {"encodings.iso8859_13", 279, 2383},
    {"encodings.iso8859_14", 280, 2401},
    {"encodings.iso8859_15", 281, 2380},
    {"encodings.iso8859_16", 282, 2382},
    {"encodings.iso8859_2", 283, 2375},
    {"encodings.iso8859_3", 284, 2382},
    {"encodings.iso8859_4", 285, 2375},
    {"encodings.iso8859_5", 286, 2376},
    {"encodings.iso8859_6", 287, 2420},
    {"encodings.iso8859_7", 288, 2383},
    {"encodings.iso8859_8", 289, 2414},
    {"encodings.iso8859_9", 290, 2375},
    {"encodings.johab", 291, 1393},
    {"encodings.koi8_r", 292, 2427},
    {"encodings.koi8_t", 293, 2338},
    {"encodings.koi8_u", 294, 2413},
    {"encodings.kz1048", 295, 2390},
    {"encodings.latin_1", 296, 1843},
    {"encodings.mac_arabic", 297, 7684},
    {"encodings.mac_centeuro", 298, 2414},
    {"encodings.mac_croatian", 299, 2422},
    {"encodings.mac_cyrillic", 300, 2412},
    {"encodings.mac_farsi", 301, 2356},
    {"encodings.mac_greek", 302, 2396},
    {"encodings.mac_iceland", 303, 2415},
    {"encodings.mac_latin2", 304, 2556},
    {"encodings.mac_roman", 305, 2413},
    {"encodings.mac_romanian", 306, 2423},
    {"encodings.mac_turkish", 307, 2416},
    {"encodings.mbcs", 308, 1642},
    {"encodings.oem", 309, 1455},
    {"encodings.palmos", 310, 2403},
    {"encodings.ptcp154", 311, 2497},
    {"encodings.punycode", 312, 6364},
    {"encodings.quopri_codec", 313, 2390},
    {"encodings.raw_unicode_escape", 314, 1716},
    {"encodings.shift_jis", 316, 1401},
    {"encodings.shift_jis_2004", 317, 1411},
    {"encodings.shift_jisx0213", 318, 1411},
    {"encodings.tis_620", 319, 2465},
    {"encodings.undefined", 320, 2110},
    {"encodings.unicode_escape", 321, 1696},
    {"encodings.unicode_internal", 322, 1706},
    {"encodings.utf_16", 323, 4780},
    {"encodings.utf_16_be", 324, 1581},
    {"encodings.utf_16_le", 325, 1581},
    {"encodings.utf_32", 326, 4673},
    {"encodings.utf_32_be", 327, 1474},
    {"encodings.utf_32_le", 328, 1474},
    {"encodings.utf_7", 329, 1502},
    {"encodings.utf_8", 330, 1561},
    {"encodings.utf_8_sig", 331, 4463},
    {"encodings.uu_codec", 332, 3223},
    {"encodings.zlib_codec", 333, 3070},
    {"enum", 334, 24217},
    {"functools", 341, 24178},
    {"genericpath", 342, 3851},
    {"heapq", 349, 14309},
    {"importlib", 357, -3670},
    {"importlib._bootstrap", 358, 29125},
    {"importlib._bootstrap_external", 359, 41765},
    {"importlib.machinery", 361, 919},
    {"inspect", 364, 79990},
    {"io", 365, 3356},
    {"keyword", 372, 1756},
    {"linecache", 373, 3736},
    {"locale", 374, 34535},
    {"ntpath", 385, 12951},
    {"opcode", 388, 5325},
    {"operator", 389, 13847},
    {"os", 390, 29671},
    {"quopri", 403, 5718},
    {"re", 405, 13751},
    {"reprlib", 406, 5297},
    {"sre_compile", 419, 15150},
    {"sre_constants", 420, 6238},
    {"sre_parse", 421, 21233},
    {"stat", 423, 4291},
    {"token", 437, 3546},
    {"tokenize", 438, 17778},
    {"types", 442, 8923},
    {"warnings", 452, 13887},
    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;
#if PYTHON_VERSION >= 0x3b0
        destination->is_package = current->size < 0;
        destination->size = Py_ABS(destination->size);
        destination->get_code = NULL;
#endif
        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

