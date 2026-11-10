/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008be190; name: FUN_008be190
 */


undefined8 FUN_008be190(undefined8 *param_1,char *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  void *__s;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  size_t __n;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  uVar12 = *(undefined4 *)(param_2 + 0x24);
  uVar13 = *(undefined4 *)(param_2 + 0x28);
  uVar14 = *(undefined4 *)(param_2 + 0x2c);
  puVar7 = (undefined8 *)param_1[3];
  do {
    if (param_1 + 2 == puVar7) {
LAB_008be1f0:
      plVar2 = (long *)FUN_00896e78(0x60);
      if (plVar2 != (long *)0x0) {
        plVar2[6] = 0;
        plVar2[7] = 0;
        plVar2[4] = 0;
        plVar2[5] = 0;
        plVar2[2] = 0;
        plVar2[3] = 0;
        *plVar2 = (long)plVar2;
        plVar2[1] = (long)plVar2;
        plVar2[8] = 0;
        plVar2[9] = 0;
        *(undefined4 *)(plVar2 + 9) = 0;
        plVar2[10] = (long)(plVar2 + 10);
        plVar2[0xb] = (long)(plVar2 + 10);
      }
      FUN_008bde34(uVar12,uVar13,uVar14,plVar2,plVar2,param_2,1);
      if (*(float *)(plVar2 + 8) != *(float *)((long)plVar2 + 0x2c)) {
        *(float *)(plVar2 + 8) = *(float *)((long)plVar2 + 0x2c);
      }
      lVar5 = *plVar2;
      plVar3 = param_1 + 2;
      *plVar2 = *plVar3;
      *(long **)(lVar5 + 8) = plVar3;
      *(long **)(*plVar3 + 8) = plVar2;
      *plVar3 = lVar5;
      if (plVar2 == (long *)0x0) {
LAB_008be394:
        uVar4 = 0;
      }
      else {
        if (*(short *)(param_2 + 0x44) != 0) {
          uVar10 = 0;
          plVar2 = plVar2 + 10;
          do {
            lVar5 = *(long *)(param_2 + 0x38);
            plVar3 = (long *)FUN_00896e78(0x38);
            if (plVar3 != (long *)0x0) {
              plVar3[5] = 0;
              plVar3[6] = 0;
              *plVar3 = (long)plVar3;
              plVar3[3] = 0;
              plVar3[4] = 0;
              plVar3[1] = (long)plVar3;
              plVar3[2] = 0;
            }
            *(undefined1 *)((long)plVar3 + 0x34) = 0;
            *(undefined4 *)(plVar3 + 6) = 0;
            plVar3[2] = lVar5 + uVar10 * 0x30;
            puVar11 = (ushort *)(lVar5 + uVar10 * 0x30 + 0x28);
            if ((ulong)*puVar11 == 0) {
              plVar3[3] = 0;
              uVar6 = (ulong)*puVar11;
            }
            else {
              __n = (ulong)*puVar11 << 3;
              __s = (void *)FUN_00896e78(__n);
              if (__s != (void *)0x0) {
                memset(__s,0,__n);
              }
              plVar3[3] = (long)__s;
              uVar6 = (ulong)*puVar11;
              if (*puVar11 != 0) {
                lVar8 = 0;
                uVar9 = 0;
                do {
                  uVar4 = (**(code **)(**(long **)(*(long *)*param_1 + 0x18) + 0x78))
                                    (*(long **)(*(long *)*param_1 + 0x18),
                                     *(long *)(lVar5 + uVar10 * 0x30 + 0x20) + lVar8,1);
                  *(undefined8 *)(plVar3[3] + uVar9 * 8) = uVar4;
                  uVar6 = (ulong)*puVar11;
                  uVar9 = uVar9 + 1;
                  lVar8 = lVar8 + 0x24;
                } while (uVar9 < uVar6);
              }
            }
            *(int *)(plVar3 + 4) = (int)uVar6;
            lVar5 = *plVar3;
            *plVar3 = *plVar2;
            *(long **)(lVar5 + 8) = plVar2;
            *(long **)(*plVar2 + 8) = plVar3;
            *plVar2 = lVar5;
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(ushort *)(param_2 + 0x44));
        }
        uVar4 = 1;
      }
      return uVar4;
    }
    iVar1 = strcmp((char *)(puVar7 + 2),param_2);
    if (iVar1 == 0) {
      if (puVar7 != (undefined8 *)0x0) goto LAB_008be394;
      goto LAB_008be1f0;
    }
    puVar7 = (undefined8 *)puVar7[1];
  } while( true );
}


