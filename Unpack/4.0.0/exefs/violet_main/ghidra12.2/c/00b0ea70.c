/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b0ea70; name: FUN_00b0ea70
 */


bool FUN_00b0ea70(long param_1,long param_2)

{
  short sVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar10;
  long *plVar9;
  long local_48 [3];
  
  FUN_01e999f4(local_48,0xc);
  if (local_48[0] == 0) {
    FUN_00d8e444(local_48);
  }
  else {
    sVar1 = *(short *)(local_48[0] + 0x1a);
    FUN_00d8e444(local_48);
    if (sVar1 != 0) {
      if (*(long *)(param_1 + 0x98) == param_2) {
        iVar6 = 0;
      }
      else if (*(long *)(param_1 + 0xa0) == param_2) {
        iVar6 = 1;
      }
      else if (*(long *)(param_1 + 0xa8) == param_2) {
        iVar6 = 2;
      }
      else {
        iVar6 = 3;
        if (*(long *)(param_1 + 0xb0) != param_2) {
          iVar6 = -1;
        }
      }
      if (((*PTR_DAT_047d4c98 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4c98);
      }
      lVar7 = *(long *)PTR_DAT_047d4ca0;
      *(long *)PTR_DAT_047d4ca8 = lVar7;
      plVar2 = *(long **)(lVar7 + 0x1c8);
      plVar9 = *(long **)(lVar7 + 0x1c0);
      if (*(long **)(lVar7 + 0x1c0) != plVar2) {
        do {
          plVar10 = plVar9 + 1;
          lVar8 = *plVar9;
          lVar7 = lVar8 + 0x28;
          uVar5 = FUN_00a371b8(lVar7);
          if ((uVar5 & 1) != 0) {
            if (iVar6 == 0) {
              cVar3 = *(char *)(lVar8 + 0x40);
            }
            else {
              cVar3 = *(char *)(lVar7 + (long)iVar6 * 0x210 + 0x114);
            }
            return cVar3 != '\0';
          }
          plVar9 = plVar10;
        } while (plVar2 != plVar10);
        return false;
      }
    }
  }
  return false;
}


