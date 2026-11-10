/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012074b0; name: FUN_012074b0
 */


void FUN_012074b0(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  byte *__s;
  long lVar4;
  size_t sVar5;
  undefined1 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined1 *unaff_x20;
  long *plVar12;
  long lVar13;
  undefined1 *puVar14;
  
  FUN_00ca1a30();
  do {
    iVar3 = FUN_012078c0(param_1,0xfffffffe);
    if (iVar3 == 0) {
      FUN_00c5db00(param_1,0);
      return;
    }
    __s = (byte *)FUN_00c646d0(param_1,0xfffffffe,0);
    plVar12 = (long *)*param_2;
    if (__s == (byte *)0x0) {
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      puVar9 = *(undefined1 **)PTR_DAT_047d3e30;
      __s = *(byte **)(PTR_DAT_047d3e30 + 8);
      sVar5 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
      plVar8 = *(long **)(PTR_DAT_047d3e30 + 0x18);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
    else {
      sVar5 = strlen((char *)__s);
      bVar1 = *__s;
      if (bVar1 == 0) {
        plVar8 = (long *)0x0;
        puVar9 = &DAT_cbf29ce484222645;
      }
      else {
        puVar9 = &DAT_cbf29ce484222645;
        pbVar10 = __s;
        do {
          pbVar10 = pbVar10 + 1;
          puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar1) * 0x100000001b3);
          bVar1 = *pbVar10;
        } while (bVar1 != 0);
        plVar8 = (long *)0x0;
      }
    }
    puVar14 = (undefined1 *)plVar12[1];
    if (puVar14 == (undefined1 *)0x0) {
LAB_012075e8:
      plVar7 = (long *)(**(code **)(*(long *)plVar12[7] + 0x10))((long *)plVar12[7],0x30,8);
      if (plVar7 == (long *)0x0) {
        (**(code **)(*(long *)plVar12[7] + 0xe8))();
      }
      lVar13 = plVar12[7];
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar4 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar4 != 0) {
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar13;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      }
      plVar7[2] = (long)puVar9;
      plVar7[3] = (long)__s;
      plVar7[4] = sVar5;
      plVar7[5] = (long)plVar8;
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      }
      *plVar7 = 0;
      plVar7[1] = (long)puVar9;
      if ((puVar14 == (undefined1 *)0x0) ||
         (*(float *)(plVar12 + 0xc) * (float)puVar14 < (float)(plVar12[0xb] + 1))) {
        uVar2 = (ulong)(puVar14 < (undefined1 *)0x3 || ((ulong)puVar14 & (ulong)(puVar14 + -1)) != 0
                       ) | (long)puVar14 << 1;
        uVar11 = (ulong)((float)(plVar12[0xb] + 1) / *(float *)(plVar12 + 0xc));
        if (uVar11 <= uVar2) {
          uVar11 = uVar2;
        }
        FUN_00db35b8(plVar12,uVar11);
        puVar14 = (undefined1 *)plVar12[1];
        if (((ulong)puVar14 & (ulong)(puVar14 + -1)) == 0) {
          unaff_x20 = (undefined1 *)((ulong)(puVar14 + -1) & (ulong)puVar9);
        }
        else if (puVar9 < puVar14) {
          unaff_x20 = puVar9;
        }
        else {
          uVar2 = 0;
          if (puVar14 != (undefined1 *)0x0) {
            uVar2 = (ulong)puVar9 / (ulong)puVar14;
          }
          unaff_x20 = puVar9 + -(uVar2 * (long)puVar14);
        }
      }
      plVar8 = *(long **)(*plVar12 + (long)unaff_x20 * 8);
      if (plVar8 == (long *)0x0) {
        plVar8 = plVar12 + 6;
        *plVar7 = *plVar8;
        *plVar8 = (long)plVar7;
        *(long **)(*plVar12 + (long)unaff_x20 * 8) = plVar8;
        if (*plVar7 != 0) {
          puVar9 = *(undefined1 **)(*plVar7 + 8);
          if (((ulong)puVar14 & (ulong)(puVar14 + -1)) == 0) {
            puVar9 = (undefined1 *)((ulong)puVar9 & (ulong)(puVar14 + -1));
          }
          else if (puVar14 <= puVar9) {
            uVar2 = 0;
            if (puVar14 != (undefined1 *)0x0) {
              uVar2 = (ulong)puVar9 / (ulong)puVar14;
            }
            puVar9 = puVar9 + -(uVar2 * (long)puVar14);
          }
          plVar8 = (long *)(*plVar12 + (long)puVar9 * 8);
          goto LAB_012076e8;
        }
      }
      else {
        *plVar7 = *plVar8;
LAB_012076e8:
        *plVar8 = (long)plVar7;
      }
      plVar12[0xb] = plVar12[0xb] + 1;
    }
    else {
      puVar6 = puVar14 + -1;
      if (((ulong)puVar14 & (ulong)puVar6) == 0) {
        unaff_x20 = (undefined1 *)((ulong)puVar6 & (ulong)puVar9);
        plVar7 = *(long **)(*plVar12 + (long)unaff_x20 * 8);
        if (plVar7 == (long *)0x0) goto LAB_012075e8;
        do {
          plVar7 = (long *)*plVar7;
          if ((plVar7 == (long *)0x0) ||
             ((undefined1 *)plVar7[1] != puVar9 &&
              (undefined1 *)((ulong)plVar7[1] & (ulong)puVar6) != unaff_x20)) goto LAB_012075e8;
        } while ((undefined1 *)plVar7[2] != puVar9);
      }
      else {
        unaff_x20 = puVar9;
        if (puVar14 <= puVar9) {
          uVar2 = 0;
          if (puVar14 != (undefined1 *)0x0) {
            uVar2 = (ulong)puVar9 / (ulong)puVar14;
          }
          unaff_x20 = puVar9 + -(uVar2 * (long)puVar14);
        }
        plVar7 = *(long **)(*plVar12 + (long)unaff_x20 * 8);
        if (plVar7 == (long *)0x0) goto LAB_012075e8;
        do {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_012075e8;
          puVar6 = (undefined1 *)plVar7[1];
          if (puVar6 != puVar9) {
            if (puVar14 <= puVar6) {
              uVar2 = 0;
              if (puVar14 != (undefined1 *)0x0) {
                uVar2 = (ulong)puVar6 / (ulong)puVar14;
              }
              puVar6 = puVar6 + -(uVar2 * (long)puVar14);
            }
            if (puVar6 != unaff_x20) goto LAB_012075e8;
          }
        } while ((undefined1 *)plVar7[2] != puVar9);
      }
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
    }
    FUN_00c5db00(param_1,0xfffffffe);
  } while( true );
}


