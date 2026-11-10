/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010f8e80; name: FUN_010f8e80
 */


undefined8 FUN_010f8e80(undefined8 param_1,int *param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long local_e0 [18];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ushort local_38;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
    iVar2 = 0;
  }
  else {
    uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    iVar2 = 0;
    if (uVar3 != 0) {
      iVar2 = *(int *)((long)param_2 + uVar3);
    }
  }
  if (iVar2 == param_3) {
    memset(local_e0,0,0x8f);
    local_40 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_38 = 0;
    FUN_010f8f64(param_1,local_e0,param_3);
    local_38 = local_38 & 0xff00;
    if (local_40._6_1_ != '\0') {
      uVar3 = 0;
      do {
        local_38 = CONCAT11(local_38._1_1_,(char)uVar3 + '\x01');
        plVar1 = (long *)local_e0[uVar3];
        if (plVar1 == (long *)0x0) {
          return 0;
        }
        uVar3 = (**(code **)(*plVar1 + 0x510))(plVar1,0x18);
        if ((uVar3 & 1) != 0) {
          return 1;
        }
        uVar3 = (ulong)(byte)local_38;
      } while ((byte)local_38 < local_40._6_1_);
    }
  }
  return 0;
}


