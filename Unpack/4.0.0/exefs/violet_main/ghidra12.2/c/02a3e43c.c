/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a3e43c; name: FUN_02a3e43c
 */


undefined4 FUN_02a3e43c(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  short sVar9;
  undefined4 uVar10;
  
  lVar6 = *param_1;
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar9 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02a3e49c;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02a3e49c:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          return 0xbf800000;
        }
        puVar7 = (undefined4 *)(lVar6 + 0x450);
        if ((((*(char *)(lVar6 + 0x460) == '\0') && (*(char *)(lVar6 + 0x464) == '\0')) &&
            (puVar7 = (undefined4 *)(lVar6 + 0x438), *(char *)(lVar6 + 0x448) == '\0')) &&
           ((*(char *)(lVar6 + 0x44c) == '\0' &&
            (puVar7 = *(undefined4 **)(lVar6 + 0x430), puVar7 == (undefined4 *)0x0)))) {
          if (((*PTR_DAT_047d4df8 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(0xbf800000,PTR_DAT_047d4df8), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4df8);
          }
          lVar8 = *(long *)PTR_DAT_047d4e00;
          *(long *)PTR_DAT_047d4e08 = lVar8;
          puVar7 = (undefined4 *)(lVar8 + 0xb140);
        }
        uVar10 = *puVar7;
        (**(code **)(*(long *)(lVar6 + -0x28) + 0x60))((long *)(lVar6 + -0x28));
        return uVar10;
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  return 0xbf800000;
}


