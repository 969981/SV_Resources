/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030f199c; name: FUN_030f199c
 */


void FUN_030f199c(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar3 = FUN_030f2f00((long *)(param_1 + 8));
  if (lVar3 == 0) {
    uVar8 = 0;
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(uint *)(lVar3 + 4);
    uVar8 = ((int)lVar3 - (int)*(undefined8 *)(param_1 + 0x18)) * 0x20000000;
  }
  uVar4 = uVar4 | uVar8;
  if (-1 < (int)uVar4) {
    lVar9 = *(long *)(param_1 + 8);
    lVar3 = (long)(int)uVar4;
    iVar6 = *(int *)(lVar9 + (long)(int)uVar4 * 0x68 + 0x30);
    iVar5 = iVar6 + -1;
    if (0 < iVar6) {
      puVar1 = PTR_PTR_047d1a50 + 0x20;
      lVar12 = (long)(int)param_3[1];
      do {
        puVar7 = (undefined8 *)(*(long *)(lVar9 + lVar3 * 0x68 + 0x28) + (long)iVar5 * 0xc);
        uVar11 = *puVar7;
        uVar2 = *(undefined4 *)(puVar7 + 1);
        iVar6 = (int)lVar12;
        if ((long)((ulong)*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= lVar12) {
          FUN_030f22a8(param_3,puVar1,lVar12 + 1);
          iVar6 = (int)param_3[1];
        }
        puVar7 = (undefined8 *)(*param_3 + (long)iVar6 * 0xc);
        *puVar7 = uVar11;
        *(undefined4 *)(puVar7 + 1) = uVar2;
        *(int *)(param_3 + 1) = (int)lVar12 + 1;
        iVar5 = iVar5 + -1;
        lVar12 = lVar12 + 1;
      } while (-1 < iVar5);
    }
    iVar5 = *(int *)(lVar9 + lVar3 * 0x68 + 0x50);
    uVar4 = iVar5 - 1;
    if (0 < iVar5) {
      puVar1 = PTR_PTR_047d1a50 + 0x20;
      do {
        lVar12 = *(long *)(*(long *)(lVar9 + lVar3 * 0x68 + 0x48) +
                           ((long)((ulong)uVar4 << 0x20) >> 0x1c) + 8);
        iVar6 = *(int *)(lVar12 + 0x48);
        iVar5 = iVar6 + -1;
        if (0 < iVar6) {
          lVar10 = (long)(int)param_3[1];
          do {
            puVar7 = (undefined8 *)(*(long *)(lVar12 + 0x40) + (long)iVar5 * 0xc);
            uVar11 = *puVar7;
            uVar2 = *(undefined4 *)(puVar7 + 1);
            iVar6 = (int)lVar10;
            if ((long)((ulong)*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= lVar10) {
              FUN_030f22a8(param_3,puVar1,lVar10 + 1);
              iVar6 = (int)param_3[1];
            }
            puVar7 = (undefined8 *)(*param_3 + (long)iVar6 * 0xc);
            *puVar7 = uVar11;
            *(undefined4 *)(puVar7 + 1) = uVar2;
            *(int *)(param_3 + 1) = (int)lVar10 + 1;
            iVar5 = iVar5 + -1;
            lVar10 = lVar10 + 1;
          } while (-1 < iVar5);
        }
        uVar4 = uVar4 - 1;
      } while (-1 < (int)uVar4);
    }
  }
  return;
}


