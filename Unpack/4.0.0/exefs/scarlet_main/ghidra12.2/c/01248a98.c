/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01248a98; name: FUN_01248a98
 */


void FUN_01248a98(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  
  uVar5 = FUN_01249340();
  cVar1 = FUN_01249348();
  if (cVar1 != '\0') {
    puVar6 = (undefined4 *)FUN_01249354(uVar5,0);
    if (((puVar6 != (undefined4 *)0x0) && (puVar6[1] == 3)) &&
       (*(char *)((long)puVar6 + 0x1e) == '\0')) {
      plVar7 = (long *)FUN_014813f4(param_1,*puVar6);
      uVar8 = (**(code **)(*plVar7 + 0x200))();
      if ((uVar8 & 1) == 0) {
        uVar3 = FUN_01247f80(param_1,puVar6);
        FUN_0124e224(param_2,uVar3);
        *(undefined1 *)((long)puVar6 + 0x89) = 1;
      }
    }
    bVar2 = FUN_01249348(uVar5);
    if (1 < bVar2) {
      puVar6 = (undefined4 *)FUN_01249354(uVar5,1);
      if (((puVar6 != (undefined4 *)0x0) && (puVar6[1] == 3)) &&
         (*(char *)((long)puVar6 + 0x1e) == '\0')) {
        plVar7 = (long *)FUN_014813f4(param_1,*puVar6);
        uVar8 = (**(code **)(*plVar7 + 0x200))();
        if ((uVar8 & 1) == 0) {
          uVar3 = FUN_01247f80(param_1,puVar6);
          FUN_0124e224(param_2,uVar3);
          *(undefined1 *)((long)puVar6 + 0x89) = 1;
        }
      }
      bVar2 = FUN_01249348(uVar5);
      if (2 < bVar2) {
        uVar9 = 2;
        do {
          puVar6 = (undefined4 *)FUN_01249354(uVar5,uVar9);
          if (((puVar6 != (undefined4 *)0x0) && (puVar6[1] == 3)) &&
             (*(char *)((long)puVar6 + 0x1e) == '\0')) {
            plVar7 = (long *)FUN_014813f4(param_1,*puVar6);
            uVar8 = (**(code **)(*plVar7 + 0x200))();
            if ((uVar8 & 1) == 0) {
              uVar3 = FUN_01247f80(param_1,puVar6);
              FUN_0124e224(param_2,uVar3);
              *(undefined1 *)((long)puVar6 + 0x89) = 1;
            }
          }
          uVar9 = uVar9 + 1;
          uVar4 = FUN_01249348(uVar5);
        } while (uVar9 < (uVar4 & 0xff));
      }
    }
  }
  return;
}


