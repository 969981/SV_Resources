/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02788bf0; name: FUN_02788bf0
 */


/* WARNING: Removing unreachable block (ram,0x02788c24) */

void FUN_02788bf0(undefined1 *param_1)

{
  if (DAT_0485dce8 == (bool *)0x0) {
    *param_1 = 0;
  }
  else {
    nn::account::AsyncContext::HasDone(DAT_0485dce8);
    *param_1 = 0;
  }
  return;
}


