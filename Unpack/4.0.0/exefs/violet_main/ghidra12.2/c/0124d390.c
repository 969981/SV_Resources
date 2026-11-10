/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124d390; name: FUN_0124d390
 */


void FUN_0124d390(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  uint *puVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  
  plVar6 = (long *)FUN_0106fc68(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x310));
  if (plVar6 != (long *)0x0) {
    bVar2 = *(byte *)(param_2 + 0x2420);
    uVar10 = (ulong)bVar2;
    if (bVar2 != 0) {
      uVar13 = 0;
      piVar14 = (int *)(param_2 + 0xc);
      do {
        if (((((uint)uVar13 & 0xff) < (uint)uVar10) &&
            (iVar1 = piVar14[-1], iVar4 = (**(code **)(*plVar6 + 0x98))(plVar6), iVar1 == iVar4)) &&
           (*piVar14 == 1)) {
          puVar7 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                         (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8
                                                   ) + 0x50),piVar14[2]);
          if (puVar7 == (uint *)0x0) {
            uVar12 = 0;
            uVar11 = 0;
          }
          else {
            uVar11 = *puVar7;
            if (4 < (int)uVar11) {
              uVar11 = 0;
            }
            if (((uVar11 & 0xff) == 5) &&
               (plVar9 = (long *)FUN_01238c38(param_1,(char)piVar14[1]), plVar9 != (long *)0x0)) {
              uVar5 = (**(code **)(*plVar9 + 0x98))();
              puVar7 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                             (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290)
                                                       + 8) + 0x50),uVar5);
              if (puVar7 == (uint *)0x0) {
                uVar11 = 0;
              }
              else {
                uVar11 = *puVar7;
                if (4 < (int)uVar11) {
                  uVar11 = 0;
                }
              }
            }
            uVar12 = uVar11 & 0xff;
            if (uVar12 == 5) goto LAB_0124d468;
          }
          sVar3 = FUN_0124d824(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x310),uVar11);
          if (sVar3 < 0) {
            uVar5 = (**(code **)(*plVar6 + 0x98))(plVar6);
            FUN_01248894(param_2,uVar5);
            uVar8 = FUN_01243584(param_1);
            FUN_0166616c(uVar8,6,uVar12);
          }
        }
LAB_0124d468:
        uVar10 = (ulong)*(byte *)(param_2 + 0x2420);
        uVar13 = uVar13 + 1;
        piVar14 = piVar14 + 0x23;
      } while (uVar13 < uVar10);
    }
  }
  return;
}


