/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c4e24; name: ~SdkThreadLocalStorage
 */


/* nn::os::SdkThreadLocalStorage::~SdkThreadLocalStorage() */

void __thiscall nn::os::SdkThreadLocalStorage::~SdkThreadLocalStorage(SdkThreadLocalStorage *this)

{
  nn::os::FreeTlsSlot(*(undefined4 *)this);
  return;
}


