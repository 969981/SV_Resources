/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027e9400; name: FUN_027e9400
 */


void FUN_027e9400(undefined1 *param_1,long *param_2)

{
  uint uVar1;
  int local_240 [4];
  undefined1 auStack_230 [512];
  
  if ((param_2 == (long *)0x0) || (uVar1 = (**(code **)(*param_2 + 0x50))(), uVar1 < 0x28)) {
    *param_1 = 0;
  }
  else {
    memset(auStack_230,0,0x200);
    (**(code **)(*param_2 + 0x48))(local_240,param_2,auStack_230,uVar1);
    *param_1 = 0;
    if (local_240[0] == 0) {
      memcpy(param_1 + 4,auStack_230,0x28);
      *param_1 = 1;
    }
  }
  return;
}


