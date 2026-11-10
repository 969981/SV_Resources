/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d22848; name: FUN_00d22848
 */


void FUN_00d22848(float param_1,long param_2)

{
  char *pcVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  float fVar11;
  
  lVar6 = *(long *)(param_2 + 0x10);
  if (((*PTR_DAT_047daf58 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047daf58), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047dd580,PTR_DAT_047daf60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047daf58);
  }
  lVar6 = *(long *)(lVar6 + 0xc0);
  plVar5 = (long *)PTR_DAT_047daf60;
  if (lVar6 != 0) {
    plVar5 = (long *)(lVar6 + 0x70);
  }
  if (*plVar5 != 0) {
    fVar11 = 1.0 / param_1;
    if (param_1 <= 1.1920929e-07) {
      fVar11 = 0.0;
    }
    FUN_00d22188(fVar11,param_2,*(undefined8 *)(param_2 + 0x60),0,0);
    FUN_00d22188(fVar11,param_2,*(undefined8 *)(param_2 + 0x80),0,0);
    puVar3 = PTR_PTR_047d1a50;
    plVar5 = *(long **)(param_2 + 0xc0);
    if (plVar5[1] != *plVar5) {
      uVar7 = 0;
      do {
        pcVar1 = (char *)(*plVar5 + uVar7 * 0x80);
        uVar9 = *(uint *)(pcVar1 + 0x60);
        cVar2 = *pcVar1;
        if ((int)uVar9 < 1) {
          puVar8 = (undefined4 *)0x0;
          uVar9 = 0x80000000;
        }
        else {
          puVar10 = *(undefined4 **)(pcVar1 + 0x58);
          puVar8 = (undefined4 *)(**(code **)(*(long *)puVar3 + 0x18))(puVar3,(ulong)uVar9 << 2);
          *puVar8 = *puVar10;
          if (uVar9 != 1) {
            lVar6 = 1;
            do {
              puVar8[lVar6] = puVar10[lVar6];
              lVar6 = lVar6 + 1;
            } while (uVar9 != (uint)lVar6);
          }
        }
        if (cVar2 != '\0') {
          FUN_00d22a28(param_2,uVar7);
        }
        if ((puVar8 != (undefined4 *)0x0) && (-1 < (int)uVar9)) {
          (**(code **)(*(long *)puVar3 + 0x20))(puVar3,puVar8,(ulong)uVar9 << 2);
        }
        plVar5 = *(long **)(param_2 + 0xc0);
        uVar7 = uVar7 + 1;
      } while (uVar7 < (ulong)(plVar5[1] - *plVar5 >> 7));
    }
  }
  return;
}


