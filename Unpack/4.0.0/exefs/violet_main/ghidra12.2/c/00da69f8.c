/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00da69f8; name: FUN_00da69f8
 */


int FUN_00da69f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5,
                int param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  size_t sVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *local_5b0;
  byte local_5a8;
  uint local_5a4;
  undefined8 local_5a0;
  undefined1 local_598;
  undefined1 *local_590;
  undefined8 local_588;
  undefined1 local_570 [1296];
  
  puVar4 = PTR_DAT_047ddb00;
  local_5a8 = 0;
  local_5a4 = 0;
  local_598 = 0;
  local_5b0 = PTR_DAT_047ddb00 + 0x10;
  local_590 = local_570;
  local_588 = -0x7ffffff600000000;
  local_5a0 = 0x5f7ffff05f7ffff0;
  FUN_00c7a7ac(&local_5b0);
  local_5a8 = local_5a8 | 0x40;
  (**(code **)(**(long **)(param_1 + 8) + 0x408))
            (*(long **)(param_1 + 8),param_2,param_3,&local_5b0);
  if (1 < (int)local_588) {
    FUN_00daa150(local_590,0,(int)local_588 + -1);
  }
  if (local_5a4 <= param_5) {
    param_5 = local_5a4;
  }
  if (param_5 == 0) {
    iVar14 = 0;
  }
  else if (param_6 == 0) {
    lVar15 = 0;
    uVar9 = 0;
    iVar14 = 0;
    do {
      puVar1 = (undefined8 *)(local_590 + lVar15);
      uVar11 = (ulong)*(ushort *)(puVar1 + 0xd);
      if (uVar11 == 0xffff) {
LAB_00da6c9c:
        iVar14 = iVar14 + 1;
      }
      else {
        lVar6 = (**(code **)(**(long **)(param_1 + 8) + 0xa0))();
        lVar6 = *(long *)(lVar6 + 0x48);
        if (*(char *)(lVar6 + uVar11 * 0x50 + 0x18) != '\0') goto LAB_00da6c9c;
        uVar16 = *puVar1;
        puVar2 = (undefined8 *)(param_4 + (ulong)(uint)((int)uVar9 - iVar14) * 0x40);
        puVar2[1] = puVar1[1] & 0xffffffff;
        *puVar2 = uVar16;
        uVar16 = puVar1[2];
        puVar2[3] = puVar1[3] & 0xffffffff;
        puVar2[2] = uVar16;
        *(undefined4 *)((long)puVar2 + 0x24) = *(undefined4 *)(puVar1 + 0xb);
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar1 + 4);
        lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x38) + (puVar1[0xb] & 0xffffff) * 0xc0;
        puVar2[5] = *(undefined8 *)(lVar10 + 0x98);
        *(uint *)(puVar2 + 6) = *(uint *)(lVar10 + 0x8c) & 0x3f;
        uVar13 = puVar2[7];
        pcVar12 = (char *)(*(ulong *)(lVar6 + uVar11 * 0x50) & 0xfffffffffffffffe);
        if ((char *)(uVar13 & 0xfffffffffffffffe) != pcVar12) {
          if (pcVar12 == (char *)0x0) {
            uVar11 = 0;
          }
          else {
            sVar7 = strlen(pcVar12);
            pvVar8 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))();
            memcpy(pvVar8,pcVar12,(long)((int)sVar7 + 1));
            uVar11 = (ulong)pvVar8 | 1;
          }
          puVar2[7] = uVar11;
          if ((uVar13 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar13 - 1,0);
          }
        }
      }
      uVar9 = uVar9 + 1;
      lVar15 = lVar15 + 0x80;
    } while (param_5 != uVar9);
  }
  else {
    lVar15 = 0;
    uVar9 = 0;
    iVar14 = 0;
    do {
      puVar1 = (undefined8 *)(local_590 + lVar15);
      uVar3 = *(ushort *)(puVar1 + 0xd);
      if ((ulong)uVar3 == 0xffff) {
        iVar14 = iVar14 + 1;
      }
      else {
        lVar6 = (**(code **)(**(long **)(param_1 + 8) + 0xa0))();
        uVar16 = *puVar1;
        puVar2 = (undefined8 *)(param_4 + (ulong)(uint)((int)uVar9 - iVar14) * 0x40);
        lVar6 = *(long *)(lVar6 + 0x48);
        puVar2[1] = puVar1[1] & 0xffffffff;
        *puVar2 = uVar16;
        uVar16 = puVar1[2];
        puVar2[3] = puVar1[3] & 0xffffffff;
        puVar2[2] = uVar16;
        *(undefined4 *)((long)puVar2 + 0x24) = *(undefined4 *)(puVar1 + 0xb);
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar1 + 4);
        lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x38) + (puVar1[0xb] & 0xffffff) * 0xc0;
        puVar2[5] = *(undefined8 *)(lVar10 + 0x98);
        *(uint *)(puVar2 + 6) = *(uint *)(lVar10 + 0x8c) & 0x3f;
        uVar11 = puVar2[7];
        pcVar12 = (char *)(*(ulong *)(lVar6 + (ulong)uVar3 * 0x50) & 0xfffffffffffffffe);
        if ((char *)(uVar11 & 0xfffffffffffffffe) != pcVar12) {
          if (pcVar12 == (char *)0x0) {
            uVar13 = 0;
          }
          else {
            sVar7 = strlen(pcVar12);
            pvVar8 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))();
            memcpy(pvVar8,pcVar12,(long)((int)sVar7 + 1));
            uVar13 = (ulong)pvVar8 | 1;
          }
          puVar2[7] = uVar13;
          if ((uVar11 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar11 - 1,0);
          }
        }
      }
      uVar9 = uVar9 + 1;
      lVar15 = lVar15 + 0x80;
    } while (param_5 != uVar9);
  }
  uVar5 = local_5a4;
  local_5b0 = puVar4 + 0x10;
  FUN_00c7a7ac(&local_5b0);
  lVar15 = local_588;
  uVar9 = (ulong)local_588._4_4_;
  local_588 = (ulong)local_588._4_4_ << 0x20;
  if ((-1 < lVar15) && (local_590 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_590,uVar9 << 7);
  }
  return uVar5 - iVar14;
}


