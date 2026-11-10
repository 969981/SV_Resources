/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b149d4; name: FUN_02b149d4
 */


uint FUN_02b149d4(undefined8 param_1,long *param_2,uint param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  ulong extraout_x1;
  
  plVar5 = (long *)(**(code **)(*param_2 + 0x930))(param_2,param_4);
  (**(code **)(*plVar5 + 0x240))(plVar5,param_3);
  if ((extraout_x1 & 7) == 0) {
    uVar4 = 0;
  }
  else {
    uVar6 = (uint)extraout_x1;
    uVar4 = uVar6 >> 3 & 0x3f;
    if ((uVar6 & 7) != 4) {
      uVar4 = 0;
    }
    uVar2 = uVar6 >> 3 & 0x3f;
    if ((uVar6 & 7) != 2) {
      uVar2 = uVar4;
    }
    uVar4 = param_3 & 0xffff;
    iVar3 = (**(code **)(*plVar5 + 0x248))(plVar5,param_3);
    uVar2 = uVar2 - (uVar4 == 0x30);
    uVar6 = (uint)(uVar4 == 0xd && 4 < (uVar2 & 0xff));
    uVar2 = uVar2 - uVar6;
    uVar1 = (uint)(uVar4 == 0x17 && 3 < (uVar2 & 0xff));
    uVar2 = uVar2 - uVar1;
    uVar1 = (iVar3 - uVar6) - uVar1;
    uVar4 = uVar2 - uVar1;
    if ((uVar4 & 0xff) != 0) {
      uVar1 = uVar2;
    }
    if ((param_5 & 1) == 0) {
      uVar4 = uVar1;
    }
    uVar4 = uVar4 & 0xff;
  }
  return uVar4;
}


