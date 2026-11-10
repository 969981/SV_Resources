/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c4e24; name: ~SdkThreadLocalStorage
 */


/* nn::os::SdkThreadLocalStorage::~SdkThreadLocalStorage() */

void __thiscall nn::os::SdkThreadLocalStorage::~SdkThreadLocalStorage(SdkThreadLocalStorage *this)

{
  nn::os::FreeTlsSlot(*(undefined4 *)this);
  return;
}


