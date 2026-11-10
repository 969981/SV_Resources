/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01774690; name: FUN_01774690
 */


void FUN_01774690(undefined1 *param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined8 local_28;
  
  cVar1 = *param_2;
  if (cVar1 == '\x02') {
LAB_017746b0:
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto LAB_017747ec;
  }
  else {
    if ((cVar1 != '\0') && (cVar1 != '\x01')) {
      if (cVar1 != '\x03') goto LAB_017747ec;
      goto LAB_017746b0;
    }
    if (*(long *)(param_2 + 8) == 0) goto LAB_017747ec;
  }
  cVar1 = *param_2;
  if (cVar1 == '\x02') {
    FUN_017747f8(auStack_38,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_01774924(param_1 + 8,auStack_38);
    puVar3 = auStack_38;
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 == '\x01') {
        lVar5 = *(long *)(param_2 + 8);
        (*(code *)**(undefined8 **)(lVar5 + 0x28))();
        uVar4 = FUN_01774848();
        if ((uVar4 & 1) == 0) {
          lVar5 = 0;
        }
        FUN_0177504c(&local_28,lVar5);
        uVar2 = local_28;
        *param_1 = 1;
        local_28 = 0;
        *(undefined8 *)(param_1 + 8) = uVar2;
        FUN_01774eac(&local_28);
        return;
      }
      if (cVar1 == '\0') {
        lVar5 = *(long *)(param_2 + 8);
        (*(code *)**(undefined8 **)(lVar5 + 0x28))();
        uVar4 = FUN_01774848();
        if ((uVar4 & 1) == 0) {
          lVar5 = 0;
        }
        *param_1 = 0;
        *(long *)(param_1 + 8) = lVar5;
        return;
      }
LAB_017747ec:
      *param_1 = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      return;
    }
    FUN_017747f8(auStack_48,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_01774924(param_1 + 8,auStack_48);
    puVar3 = auStack_48;
  }
  FUN_0177429c(puVar3);
  return;
}


