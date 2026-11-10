/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ed3bc4; name: FUN_01ed3bc4
 */


void FUN_01ed3bc4(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 local_70;
  undefined4 local_64;
  undefined1 auStack_60 [24];
  long *local_48;
  long *local_28;
  
  FUN_0177dbc8(&local_28,param_2 + 1,"+inner");
  FUN_0135d26c(auStack_60,&local_28);
  local_64 = 0;
  lVar5 = *param_2;
  plVar4 = *(long **)*param_3;
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    lVar1 = plVar4[1];
    if (lVar6 != lVar1) {
      do {
        if (*(long *)(lVar6 + 0x48) != 0) {
          FUN_01ed3cec(lVar5 + 0x60,*(long *)(lVar6 + 0x48),*(undefined4 *)(lVar6 + 0x68));
        }
        lVar6 = lVar6 + 0x70;
      } while (lVar1 != lVar6);
    }
  }
  uVar2 = FUN_01ed3d90(lVar5 + 0x60);
  if (uVar2 < 4) {
    uVar3 = *(undefined4 *)(&DAT_03caa710 + (long)(int)uVar2 * 4);
  }
  else {
    uVar3 = 1;
  }
  if (*(char *)(lVar5 + 0x58) == '\0') {
    *(undefined4 *)(lVar5 + 0x5c) = uVar3;
    *(undefined1 *)(lVar5 + 0x58) = 1;
  }
  else {
    *(undefined4 *)(lVar5 + 0x5c) = uVar3;
  }
  local_70 = 0;
  FUN_01945a78(param_1,auStack_60,&local_64,&local_70);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


