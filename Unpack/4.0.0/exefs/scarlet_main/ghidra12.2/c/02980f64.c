/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02980f64; name: FUN_02980f64
 */


void FUN_02980f64(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_108 [176];
  undefined2 local_58 [12];
  
  if (*(char *)*param_3 != '\0') {
    plVar2 = (long *)FUN_014813f4(param_1,*(undefined4 *)((char *)*param_3 + 4));
    lVar6 = param_3[1];
    lVar1 = param_3[2];
    uVar3 = FUN_01246e90(param_1);
    FUN_029321dc(uVar3,plVar2,lVar6,(short)lVar1);
    FUN_029835e4(local_58);
    FUN_01243d84(auStack_108);
    FUN_0298c4ec(param_1,local_58,plVar2,(short)param_3[2]);
    FUN_0298c530(param_1,auStack_108,plVar2,local_58,*(undefined1 *)(*param_3 + 0x30));
    uVar4 = (**(code **)(*plVar2 + 0x220))(plVar2,0xf);
    if (((uVar4 & 1) == 0) || (uVar4 = FUN_0161bd78(local_58[0]), (uVar4 & 1) == 0)) {
      uVar4 = (**(code **)(*plVar2 + 0x220))(plVar2,0x18);
      if (((uVar4 & 1) == 0) || (uVar4 = FUN_016b1d7c(local_58[0]), (uVar4 & 1) == 0)) {
        FUN_0298c56c(param_1,plVar2,local_58,auStack_108);
        return;
      }
      uVar3 = FUN_01243584(param_1);
      uVar5 = 0x21;
    }
    else {
      uVar3 = FUN_01243584(param_1);
      uVar5 = 0xd;
    }
    FUN_01582e80(uVar3,plVar2,local_58[0],uVar5);
  }
  return;
}


