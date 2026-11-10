/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00351fa0; name: FUN_00351fa0
 */


long FUN_00351fa0(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  void *__ptr;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar6 = FUN_00351820();
  uVar10 = (ulong)*(byte *)(lVar6 + (param_2 & 0xffffffff) + 0x20);
  if (uVar10 == 0xff) {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    bVar2 = *(byte *)(lVar6 + 0x2f);
    if ((uint)*(byte *)(lVar6 + 0x30) < bVar2 + 4) {
      uVar5 = (uint)*(byte *)(lVar6 + 0x30) * 3;
      uVar1 = 0xfffffffe;
      if (uVar5 < 0x1fe) {
        uVar1 = uVar5 >> 1;
      }
      *(char *)(lVar6 + 0x30) = (char)uVar1;
      if (bVar2 + 4 <= (uVar1 & 0xff)) {
        lVar6 = FUN_0038c7f0(lVar6,(uVar1 & 0xff) * 8 + 0x38);
        bVar2 = *(byte *)(lVar6 + 0x2f);
        goto LAB_0035205c;
      }
    }
    else {
LAB_0035205c:
      uVar10 = (ulong)bVar2;
      *(byte *)(lVar6 + 0x2f) = bVar2 + 4;
      if (bVar2 != 0xff) goto LAB_0035206c;
    }
    uStack_48 = param_3[1];
    local_50 = *param_3;
    uStack_38 = param_3[3];
    uStack_40 = param_3[2];
    __ptr = (void *)FUN_00366f90(&local_50);
    free(__ptr);
  }
  else {
    puVar7 = *(undefined8 **)(lVar6 + uVar10 * 8 + 0x38);
    if ((puVar7 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar7, plVar8 != (long *)0x0)) {
      do {
        lVar9 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 + -1 == 0) {
        (*(code *)puVar7[3])(puVar7[4]);
      }
    }
LAB_0035206c:
    *(char *)(lVar6 + (param_2 & 0xffffffff) + 0x20) = (char)uVar10;
    lVar9 = lVar6 + uVar10 * 8;
    uVar12 = param_3[1];
    uVar11 = *param_3;
    uVar13 = param_3[2];
    *(undefined8 *)(lVar9 + 0x50) = param_3[3];
    *(undefined8 *)(lVar9 + 0x48) = uVar13;
    *(undefined8 *)(lVar9 + 0x40) = uVar12;
    *(undefined8 *)(lVar9 + 0x38) = uVar11;
  }
  return lVar6;
}


