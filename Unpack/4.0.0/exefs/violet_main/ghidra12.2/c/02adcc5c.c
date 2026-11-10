/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02adcc5c; name: FUN_02adcc5c
 */


undefined8 FUN_02adcc5c(short param_1)

{
  long *plVar1;
  long *plVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  ushort uVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  short *psVar12;
  long lVar13;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar11 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar11;
  puVar5 = PTR_DAT_047d48d8;
  puVar4 = PTR_DAT_047d48d0;
  plVar1 = *(long **)(lVar11 + 0x1c0);
  plVar2 = *(long **)(lVar11 + 0x1c8);
  do {
    if (plVar1 == plVar2) {
      return 0;
    }
    lVar11 = *plVar1;
    plVar8 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x28))((undefined8 *)(lVar11 + 0x28));
    if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
      uVar9 = FUN_01b3fb0c();
      *(undefined8 *)puVar5 = uVar9;
      __cxa_guard_release(puVar4);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)puVar5) {
        if (*(char *)(lVar11 + 0x40) == '\0') {
LAB_02adce64:
          uVar9 = 0;
        }
        else {
          lVar13 = *(long *)(lVar11 + 600);
          lVar10 = lVar11;
          if (((lVar13 == 0) || (psVar12 = *(short **)(lVar13 + 8), *psVar12 != param_1)) ||
             (*(char *)(lVar13 + 0x18) != '\0')) {
LAB_02adcddc:
            lVar13 = *(long *)(lVar11 + 0x278);
            if ((lVar13 != 0) &&
               ((psVar12 = *(short **)(lVar13 + 8), *psVar12 == param_1 &&
                (*(char *)(lVar13 + 0x18) == '\0')))) {
              lVar10 = 1;
              if (psVar12 == (short *)0x0) {
                return 1;
              }
              if (*(long *)(lVar13 + 0x10) == 0) {
                return 1;
              }
              sVar3 = *(short *)(*(long *)(lVar13 + 0x10) + 8);
              if ((sVar3 == 0) || (*(float *)(psVar12 + 2) < (float)(int)sVar3)) goto LAB_02adcf60;
            }
            lVar13 = *(long *)(lVar11 + 0x298);
            if ((lVar13 != 0) &&
               ((psVar12 = *(short **)(lVar13 + 8), *psVar12 == param_1 &&
                (*(char *)(lVar13 + 0x18) == '\0')))) {
              lVar10 = 1;
              if (psVar12 == (short *)0x0) {
                return 1;
              }
              if (*(long *)(lVar13 + 0x10) == 0) {
                return 1;
              }
              sVar3 = *(short *)(*(long *)(lVar13 + 0x10) + 8);
              if ((sVar3 == 0) || (*(float *)(psVar12 + 2) < (float)(int)sVar3)) goto LAB_02adcf60;
            }
            lVar13 = *(long *)(lVar11 + 0x2b8);
            if ((lVar13 != 0) &&
               ((psVar12 = *(short **)(lVar13 + 8), *psVar12 == param_1 &&
                (*(char *)(lVar13 + 0x18) == '\0')))) {
              lVar10 = 1;
              if (psVar12 == (short *)0x0) {
                return 1;
              }
              if (*(long *)(lVar13 + 0x10) == 0) {
                return 1;
              }
              sVar3 = *(short *)(*(long *)(lVar13 + 0x10) + 8);
              if ((sVar3 == 0) || (*(float *)(psVar12 + 2) < (float)(int)sVar3)) goto LAB_02adcf60;
            }
            uVar6 = FUN_00b0e9ac(lVar10);
            if (((uVar6 < 0x100) ||
                ((((uVar6 & 0xff) == 0 || (lVar11 = *(long *)(lVar11 + 0xb00), lVar11 == 0)) ||
                 (*(char *)(lVar11 + 0x18) != '\0')))) ||
               ((((*(long *)(lVar11 + 0x10) != 0 && (*(long *)(lVar11 + 8) != 0)) &&
                 (sVar3 = *(short *)(*(long *)(lVar11 + 0x10) + 8), sVar3 != 0)) &&
                ((float)(int)sVar3 <= *(float *)(*(long *)(lVar11 + 8) + 4))))) goto LAB_02adce64;
          }
          else {
            lVar10 = 1;
            if (psVar12 == (short *)0x0) {
              return 1;
            }
            if (*(long *)(lVar13 + 0x10) == 0) {
              return 1;
            }
            sVar3 = *(short *)(*(long *)(lVar13 + 0x10) + 8);
            if ((sVar3 != 0) && ((float)(int)sVar3 <= *(float *)(psVar12 + 2))) goto LAB_02adcddc;
          }
LAB_02adcf60:
          uVar9 = 1;
        }
        return uVar9;
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


