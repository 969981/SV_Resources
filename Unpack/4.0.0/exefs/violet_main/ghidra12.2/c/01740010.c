/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01740010; name: FUN_01740010
 */


void FUN_01740010(ulong *param_1,ulong *param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  
  FUN_0173f970(param_1,(long)param_1 + 0xc,param_1 + 3);
  if ((ulong *)((long)param_1 + 0x24) != param_2) {
    lVar6 = 0;
    puVar9 = (ulong *)((long)param_1 + 0x24);
    puVar10 = param_1 + 3;
    do {
      puVar5 = puVar9;
      uVar7 = *puVar5;
      iVar1 = (int)puVar5[1];
      bVar3 = (uVar7 & 0xffff00000000) == 0;
      bVar4 = (int)uVar7 == 0;
      if (((!bVar3 && !bVar4) && iVar1 != (int)puVar10[1]) &&
          ((bVar3 || bVar4) || (int)puVar10[1] <= iVar1)) {
        lVar2 = lVar6;
        do {
          lVar8 = lVar2;
          *(undefined8 *)((long)param_1 + lVar8 + 0x24) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x18);
          *(undefined4 *)((long)param_1 + lVar8 + 0x2c) =
               *(undefined4 *)((long)param_1 + lVar8 + 0x20);
          if (lVar8 == -0x18) {
            puVar9 = param_1;
            goto LAB_017400c0;
          }
          lVar2 = lVar8 + -0xc;
        } while (*(int *)((long)param_1 + lVar8 + 0x14) < iVar1);
        puVar9 = (ulong *)((long)param_1 + lVar8 + 0x18);
LAB_017400c0:
        *puVar9 = uVar7;
        *(int *)(puVar9 + 1) = iVar1;
      }
      lVar6 = lVar6 + 0xc;
      puVar9 = (ulong *)((long)puVar5 + 0xc);
      puVar10 = puVar5;
    } while ((ulong *)((long)puVar5 + 0xc) != param_2);
  }
  return;
}


