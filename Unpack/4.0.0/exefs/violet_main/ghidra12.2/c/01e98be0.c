/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e98be0; name: FUN_01e98be0
 */


void FUN_01e98be0(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined1 auStack_30 [16];
  
  if ((*param_2 == 0) || (lVar1 = *(long *)(*param_2 + 0x10), lVar1 == 0)) {
    FUN_019870dc(param_1);
    return;
  }
  FUN_01f63bf0(auStack_30,lVar1 + -0x28);
  FUN_019ab758(param_1,auStack_30);
  FUN_019aba14(auStack_30);
  return;
}


