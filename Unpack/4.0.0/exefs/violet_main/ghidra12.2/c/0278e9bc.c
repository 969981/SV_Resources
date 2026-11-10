/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278e9bc; name: FUN_0278e9bc
 */


undefined8 FUN_0278e9bc(undefined8 param_1,long *param_2,void *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_250 [4];
  undefined1 auStack_240 [40];
  undefined1 auStack_218 [472];
  
  if (param_2 != (long *)0x0) {
    iVar3 = (**(code **)(*param_2 + 0x50))(param_2);
    uVar2 = iVar3 - 0x28;
    uVar1 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    if (0 < (int)uVar2 && uVar1 <= param_4) {
      memset(auStack_240,0,0x200);
      (**(code **)(*param_2 + 0x48))(local_250,param_2,auStack_240,0x200);
      if (local_250[0] == 0) {
        memcpy(param_3,auStack_218,(ulong)uVar1);
        return 1;
      }
      return 0;
    }
  }
  return 0;
}


