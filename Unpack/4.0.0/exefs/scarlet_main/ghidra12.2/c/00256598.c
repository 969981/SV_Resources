/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00256598; name: FUN_00256598
 */


undefined4 * FUN_00256598(undefined4 *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  pbVar1 = (byte *)(param_1 + 2);
  puVar2 = (undefined8 *)(param_2 + 2);
  if ((*(long **)(param_1 + 8) == *(long **)(param_2 + 8)) ||
     (uVar6 = (**(code **)(**(long **)(param_1 + 8) + 0x20))(), (uVar6 & 1) != 0)) {
    if ((*pbVar1 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 8) + 0x18))
                (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 6),
                 *(ulong *)(param_1 + 2) & 0xfffffffffffffffe,1);
      *(undefined2 *)(param_1 + 2) = 0;
    }
    uVar9 = *(undefined8 *)(param_2 + 4);
    uVar8 = *puVar2;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar9;
    *(undefined8 *)pbVar1 = uVar8;
    *(undefined2 *)puVar2 = 0;
    cVar4 = *(char *)(param_1 + 10);
    cVar5 = *(char *)(param_2 + 10);
  }
  else {
    FUN_01d0e1a8(pbVar1,puVar2);
    cVar4 = *(char *)(param_1 + 10);
    cVar5 = *(char *)(param_2 + 10);
  }
  if (cVar4 == '\0') {
    if (cVar5 != '\0') {
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
      uVar8 = *(undefined8 *)(param_2 + 0xe);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0xe) = uVar8;
      lVar7 = *(long *)(param_2 + 0x12);
      plVar3 = (long *)(param_1 + 0xe);
      *(long *)(param_1 + 0x12) = lVar7;
      if (lVar7 == 0) {
        *(long **)(param_1 + 0xc) = plVar3;
      }
      else {
        *(long **)(*plVar3 + 0x10) = plVar3;
        *(undefined4 **)(param_2 + 0xc) = param_2 + 0xe;
        *(undefined8 *)(param_2 + 0xe) = 0;
        *(undefined8 *)(param_2 + 0x12) = 0;
      }
      *(undefined1 *)(param_1 + 10) = 1;
    }
  }
  else if (cVar5 == '\0') {
    FUN_01cfa44c(param_1 + 0xc,*(undefined8 *)(param_1 + 0xe));
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    FUN_0024aaa0(param_1 + 0xc,param_2 + 0xc);
  }
  return param_1;
}


