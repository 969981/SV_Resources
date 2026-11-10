/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ba6f0; name: FUN_004ba6f0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_004ba6f0(long param_1,long param_2,long param_3)

{
  undefined8 *****pppppuVar1;
  int iVar2;
  char cVar3;
  undefined8 *****pppppuVar4;
  undefined *puVar5;
  ulong *puVar6;
  long *plVar7;
  undefined8 ******ppppppuVar8;
  long lVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  int *piVar12;
  undefined8 ******ppppppuVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *******pppppppuVar16;
  byte local_e8 [16];
  undefined8 local_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  undefined8 *******local_78;
  undefined8 *******local_70;
  long local_68;
  
  puVar5 = PTR_LAB_047cba48;
  if (((*(byte *)(*(long *)(param_2 + 0x20) + 0x28) & 1) == 0) ||
     (*(char *)(*(long *)(param_2 + 0x20) + 0x48) == '\0')) {
    local_70 = (undefined8 *******)0x0;
    local_68 = 0;
    local_78 = &local_70;
    if (0 < *(int *)(param_2 + 0x2c)) {
      lVar15 = 0;
      do {
        lVar9 = *(long *)(param_2 + 0x30);
        piVar12 = (int *)(lVar9 + lVar15 * 0x28 + 0x10);
        iVar2 = *piVar12;
        pppppppuVar10 = &local_70;
        pppppppuVar11 = local_70;
        pppppppuVar16 = &local_70;
        if (local_70 == (undefined8 *******)0x0) {
          uVar14 = *(undefined8 *)(lVar9 + lVar15 * 0x28 + 8);
LAB_004ba838:
          ppppppuVar13 = *pppppppuVar16;
joined_r0x004ba918:
          if (ppppppuVar13 == (undefined8 ******)0x0) {
            ppppppuVar13 = (undefined8 ******)FUN_0049e770(PTR_FUN_047cba38,0x40);
            *(int *)(ppppppuVar13 + 4) = iVar2;
            ppppppuVar13[5] = (undefined8 *****)0x0;
            ppppppuVar13[2] = pppppppuVar10;
            ppppppuVar13[6] = (undefined8 *****)0x0;
            ppppppuVar13[7] = (undefined8 *****)0x0;
            *ppppppuVar13 = (undefined8 *****)0x0;
            ppppppuVar13[1] = (undefined8 *****)0x0;
            *pppppppuVar16 = ppppppuVar13;
            if ((undefined8 *******)*local_78 == (undefined8 *******)0x0) {
              ppppppuVar8 = ppppppuVar13;
            }
            else {
              ppppppuVar8 = *pppppppuVar16;
              local_78 = (undefined8 *******)*local_78;
            }
            FUN_010108e0(local_70,ppppppuVar8);
            local_68 = local_68 + 1;
          }
                    /* try { // try from 004ba784 to 004ba78b has its CatchHandler @ 004bab90 */
          FUN_001fcec0(ppppppuVar13 + 5,uVar14);
        }
        else {
          do {
            if (iVar2 <= *(int *)(pppppppuVar11 + 4)) {
              pppppppuVar10 = pppppppuVar11;
            }
            pppppppuVar11 = (undefined8 *******)pppppppuVar11[*(int *)(pppppppuVar11 + 4) < iVar2];
          } while (pppppppuVar11 != (undefined8 *******)0x0);
          if (((undefined8 ********)pppppppuVar10 == &local_70) ||
             (iVar2 < *(int *)(pppppppuVar10 + 4))) {
            uVar14 = *(undefined8 *)(lVar9 + lVar15 * 0x28 + 8);
            pppppppuVar10 = local_70;
            while( true ) {
              while (iVar2 < *(int *)(pppppppuVar10 + 4)) {
                pppppppuVar16 = pppppppuVar10;
                if ((undefined8 *******)*pppppppuVar10 == (undefined8 *******)0x0) {
                  ppppppuVar13 = *pppppppuVar10;
                  goto joined_r0x004ba918;
                }
                pppppppuVar10 = (undefined8 *******)*pppppppuVar10;
              }
              if (iVar2 <= *(int *)(pppppppuVar10 + 4)) break;
              pppppppuVar16 = pppppppuVar10 + 1;
              if ((undefined8 *******)*pppppppuVar16 == (undefined8 *******)0x0) break;
              pppppppuVar10 = (undefined8 *******)*pppppppuVar16;
            }
            goto LAB_004ba838;
          }
                    /* try { // try from 004ba88c to 004ba89b has its CatchHandler @ 004bab8c */
          FUN_004a8ec0(local_e8,&DAT_03c246d6,*(undefined8 *)(lVar9 + lVar15 * 0x28 + 8));
                    /* try { // try from 004ba89c to 004ba8af has its CatchHandler @ 004bab6c */
          puVar6 = (ulong *)FUN_0021d540(local_e8,"\" uses the same enum value as \"",0x1f);
          uStack_c8 = puVar6[1];
          local_d0 = *puVar6;
          local_c0 = puVar6[2];
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          iVar2 = *piVar12;
          pppppppuVar10 = &local_70;
          if (local_70 == (undefined8 *******)0x0) {
          }
          else {
            pppppppuVar11 = local_70;
            while( true ) {
              while (pppppppuVar16 = pppppppuVar11, iVar2 < *(int *)(pppppppuVar11 + 4)) {
                if ((undefined8 *******)*pppppppuVar11 == (undefined8 *******)0x0) {
                  ppppppuVar13 = *pppppppuVar11;
                  goto joined_r0x004ba92c;
                }
                pppppppuVar10 = pppppppuVar11;
                pppppppuVar11 = (undefined8 *******)*pppppppuVar11;
              }
              if (iVar2 <= *(int *)(pppppppuVar11 + 4)) break;
              pppppppuVar10 = pppppppuVar11 + 1;
              if ((undefined8 *******)*pppppppuVar10 == (undefined8 *******)0x0) break;
              pppppppuVar11 = (undefined8 *******)*pppppppuVar10;
            }
          }
          ppppppuVar13 = *pppppppuVar10;
          pppppppuVar11 = pppppppuVar10;
joined_r0x004ba92c:
          if (ppppppuVar13 == (undefined8 ******)0x0) {
            ppppppuVar13 = (undefined8 ******)FUN_0049e770(PTR_FUN_047cba38,0x40);
            *(int *)(ppppppuVar13 + 4) = iVar2;
            ppppppuVar13[5] = (undefined8 *****)0x0;
            ppppppuVar13[2] = pppppppuVar16;
            ppppppuVar13[6] = (undefined8 *****)0x0;
            ppppppuVar13[7] = (undefined8 *****)0x0;
            *ppppppuVar13 = (undefined8 *****)0x0;
            ppppppuVar13[1] = (undefined8 *****)0x0;
            *pppppppuVar11 = ppppppuVar13;
            if ((undefined8 *******)*local_78 == (undefined8 *******)0x0) {
              ppppppuVar8 = ppppppuVar13;
            }
            else {
              ppppppuVar8 = *pppppppuVar11;
              local_78 = (undefined8 *******)*local_78;
            }
            FUN_010108e0(local_70,ppppppuVar8);
            local_68 = local_68 + 1;
          }
          pppppuVar1 = (undefined8 *****)(ulong)(*(byte *)(ppppppuVar13 + 5) >> 1);
          pppppuVar4 = (undefined8 *****)((long)ppppppuVar13 + 0x29);
          if ((*(byte *)(ppppppuVar13 + 5) & 1) != 0) {
            pppppuVar1 = ppppppuVar13[6];
            pppppuVar4 = ppppppuVar13[7];
          }
                    /* try { // try from 004ba9b8 to 004ba9bf has its CatchHandler @ 004bab44 */
          puVar6 = (ulong *)FUN_0021d540(&local_d0,pppppuVar4,pppppuVar1);
          uStack_a8 = puVar6[1];
          local_b0 = *puVar6;
          local_a0 = puVar6[2];
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
                    /* try { // try from 004ba9d8 to 004ba9eb has its CatchHandler @ 004bab08 */
          puVar6 = (ulong *)FUN_0021d540(&local_b0,
                                         "\". If this is intended, set \'option allow_alias = true;\' to the enum definition."
                                         ,0x50);
          uStack_88 = puVar6[1];
          local_90 = *puVar6;
          local_80 = puVar6[2];
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          if ((local_b0 & 1) == 0) {
            if ((local_d0 & 1) != 0) goto LAB_004baa48;
LAB_004baa14:
            if ((local_e8[0] & 1) != 0) goto LAB_004baa5c;
LAB_004baa1c:
            cVar3 = *(char *)(*(long *)(param_2 + 0x20) + 0x48);
          }
          else {
            FUN_0049e790(puVar5,local_a0);
            if ((local_d0 & 1) == 0) goto LAB_004baa14;
LAB_004baa48:
            FUN_0049e790(puVar5,local_c0);
            if ((local_e8[0] & 1) == 0) goto LAB_004baa1c;
LAB_004baa5c:
            FUN_0049e790(puVar5,local_d8);
            cVar3 = *(char *)(*(long *)(param_2 + 0x20) + 0x48);
          }
          if (cVar3 == '\0') {
            plVar7 = *(long **)(param_1 + 0x10);
            if (plVar7 != (long *)0x0) {
                    /* try { // try from 004baa98 to 004baaa3 has its CatchHandler @ 004baaf4 */
              (**(code **)(*plVar7 + 0x10))
                        (plVar7,param_1 + 0x38,*(undefined8 *)(param_2 + 8),
                         *(undefined8 *)(*(long *)(param_3 + 0x28) + lVar15 * 8 + 8),1,&local_90);
            }
            *(undefined1 *)(param_1 + 0x30) = 1;
          }
          if ((local_90 & 1) != 0) {
            FUN_0049e790(puVar5,local_80);
          }
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)(param_2 + 0x2c));
    }
    FUN_002cec00(&local_78,local_70);
  }
  return;
}


