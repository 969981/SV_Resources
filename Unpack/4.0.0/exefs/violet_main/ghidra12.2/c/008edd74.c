/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008edd74; name: FUN_008edd74
 */


void FUN_008edd74(undefined8 param_1,long *param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 uVar7;
  char cVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  long lVar11;
  long local_a0;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar6 = PTR_DAT_047d26e8;
  if (*(long *)PTR_DAT_047d26e8 != 0) {
    FUN_008d43e0("Texture Sampler Table Already Created.\n");
    return;
  }
  *(undefined4 *)PTR_DAT_047d26f0 = 0x20;
  local_a0 = (**(code **)(*param_2 + 0x10))(param_2,0x1500,0x80);
  uVar9 = 0;
  *(long *)puVar6 = local_a0;
  bVar4 = true;
  do {
    lVar11 = 0;
    cVar8 = '\0';
    do {
      puVar1 = (undefined1 *)(local_a0 + lVar11);
      *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
      FUN_008f1bb0(puVar1 + 0x30);
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      puVar1[0x10] = cVar8;
      puVar1[0x11] = 0;
      puVar1[0x12] = uVar9;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      *(undefined8 *)(puVar1 + 0x1b) = 0;
      *(undefined8 *)(puVar1 + 0x13) = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      FUN_008f0478(&local_80);
      uVar10 = 0x2a;
      if (puVar1[0x12] != '\0') {
        uVar10 = 0x15;
      }
      local_80 = CONCAT26(uVar10,(undefined6)local_80);
      switch(puVar1[0x10]) {
      case 0:
        local_80 = CONCAT71(local_80._1_7_,1);
        break;
      case 1:
        local_80 = (ulong)local_80._1_7_ << 8;
        break;
      case 2:
        uVar7 = 2;
        goto LAB_008edf1c;
      case 3:
        uVar7 = 4;
LAB_008edf1c:
        local_80 = CONCAT71(local_80._1_7_,uVar7);
      }
      if ((byte)puVar1[0x11] < 4) {
        local_80._0_2_ =
             CONCAT11((char)(0x4020001 >> (ulong)(((byte)puVar1[0x11] & 3) << 3)),
                      (undefined1)local_80);
      }
      local_80._0_3_ = CONCAT12(1,(undefined2)local_80);
      FUN_008f1bd8(puVar1 + 0x30,param_1,&local_80);
      *puVar1 = 1;
      *(undefined8 *)(puVar1 + 0xd0) = 0xffffffffffffffff;
      FUN_008f1bb0(puVar1 + 0xd8);
      puVar1[0xa8] = 0;
      *(undefined8 *)(puVar1 + 0xb0) = 0;
      puVar1[0xb8] = cVar8;
      puVar1[0xb9] = 1;
      puVar1[0xba] = uVar9;
      *(undefined8 *)(puVar1 + 0xbb) = 0;
      *(undefined8 *)(puVar1 + 0xc3) = 0;
      *(undefined8 *)(puVar1 + 200) = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      FUN_008f0478(&local_80);
      uVar10 = 0x2a;
      if (puVar1[0xba] != '\0') {
        uVar10 = 0x15;
      }
      local_80 = CONCAT26(uVar10,(undefined6)local_80);
      switch(puVar1[0xb8]) {
      case 0:
        local_80 = CONCAT71(local_80._1_7_,1);
        bVar2 = puVar1[0xb9];
        lVar5 = local_80;
        break;
      case 1:
        local_80 = (ulong)local_80._1_7_ << 8;
        bVar2 = puVar1[0xb9];
        lVar5 = local_80;
        break;
      case 2:
        local_80 = CONCAT71(local_80._1_7_,2);
      default:
        bVar2 = puVar1[0xb9];
        lVar5 = local_80;
        break;
      case 3:
        local_80 = CONCAT71(local_80._1_7_,4);
        bVar2 = puVar1[0xb9];
        lVar5 = local_80;
      }
      local_80 = lVar5;
      if (bVar2 < 4) {
        local_80._2_6_ = (undefined6)((ulong)lVar5 >> 0x10);
        local_80._0_1_ = (undefined1)lVar5;
        local_80._0_2_ =
             CONCAT11((char)(0x4020001 >> (ulong)((bVar2 & 3) << 3)),(undefined1)local_80);
      }
      local_80._0_3_ = CONCAT12(1,(undefined2)local_80);
      FUN_008f1bd8(puVar1 + 0xd8,param_1,&local_80);
      puVar1[0xa8] = 1;
      *(undefined8 *)(puVar1 + 0x178) = 0xffffffffffffffff;
      FUN_008f1bb0(puVar1 + 0x180);
      puVar1[0x161] = 2;
      puVar1[0x150] = 0;
      *(undefined8 *)(puVar1 + 0x158) = 0;
      puVar1[0x160] = cVar8;
      puVar1[0x162] = uVar9;
      *(undefined8 *)(puVar1 + 0x163) = 0;
      *(undefined8 *)(puVar1 + 0x16b) = 0;
      *(undefined8 *)(puVar1 + 0x170) = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      FUN_008f0478(&local_80);
      uVar10 = 0x2a;
      if (puVar1[0x162] != '\0') {
        uVar10 = 0x15;
      }
      local_80 = CONCAT26(uVar10,(undefined6)local_80);
      switch(puVar1[0x160]) {
      case 0:
        local_80 = CONCAT71(local_80._1_7_,1);
        bVar2 = puVar1[0x161];
        lVar5 = local_80;
        break;
      case 1:
        local_80 = (ulong)local_80._1_7_ << 8;
        bVar2 = puVar1[0x161];
        lVar5 = local_80;
        break;
      case 2:
        local_80 = CONCAT71(local_80._1_7_,2);
      default:
        bVar2 = puVar1[0x161];
        lVar5 = local_80;
        break;
      case 3:
        local_80 = CONCAT71(local_80._1_7_,4);
        bVar2 = puVar1[0x161];
        lVar5 = local_80;
      }
      local_80 = lVar5;
      if (bVar2 < 4) {
        local_80._2_6_ = (undefined6)((ulong)lVar5 >> 0x10);
        local_80._0_1_ = (undefined1)lVar5;
        local_80._0_2_ =
             CONCAT11((char)(0x4020001 >> (ulong)((bVar2 & 3) << 3)),(undefined1)local_80);
      }
      local_80._0_3_ = CONCAT12(1,(undefined2)local_80);
      FUN_008f1bd8(puVar1 + 0x180,param_1,&local_80);
      puVar1[0x150] = 1;
      *(undefined8 *)(puVar1 + 0x220) = 0xffffffffffffffff;
      FUN_008f1bb0(puVar1 + 0x228);
      puVar1[0x209] = 3;
      puVar1[0x1f8] = 0;
      *(undefined8 *)(puVar1 + 0x200) = 0;
      puVar1[0x208] = cVar8;
      puVar1[0x20a] = uVar9;
      *(undefined8 *)(puVar1 + 0x20b) = 0;
      *(undefined8 *)(puVar1 + 0x213) = 0;
      *(undefined8 *)(puVar1 + 0x218) = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      FUN_008f0478(&local_80);
      uVar10 = 0x2a;
      if (puVar1[0x20a] != '\0') {
        uVar10 = 0x15;
      }
      local_80 = CONCAT26(uVar10,(undefined6)local_80);
      switch(puVar1[0x208]) {
      case 0:
        local_80 = CONCAT71(local_80._1_7_,1);
        bVar2 = puVar1[0x209];
        lVar5 = local_80;
        break;
      case 1:
        local_80 = (ulong)local_80._1_7_ << 8;
        bVar2 = puVar1[0x209];
        lVar5 = local_80;
        break;
      case 2:
        local_80 = CONCAT71(local_80._1_7_,2);
      default:
        bVar2 = puVar1[0x209];
        lVar5 = local_80;
        break;
      case 3:
        local_80 = CONCAT71(local_80._1_7_,4);
        bVar2 = puVar1[0x209];
        lVar5 = local_80;
      }
      local_80 = lVar5;
      if (bVar2 < 4) {
        local_80._2_6_ = (undefined6)((ulong)lVar5 >> 0x10);
        local_80._0_1_ = (undefined1)lVar5;
        local_80._0_2_ =
             CONCAT11((char)(0x4020001 >> (ulong)((bVar2 & 3) << 3)),(undefined1)local_80);
      }
      local_80._0_3_ = CONCAT12(1,(undefined2)local_80);
      FUN_008f1bd8(puVar1 + 0x228,param_1,&local_80);
      lVar11 = lVar11 + 0x2a0;
      cVar8 = cVar8 + '\x01';
      puVar1[0x1f8] = 1;
    } while ((int)lVar11 != 0xa80);
    local_a0 = local_a0 + lVar11;
    uVar9 = 1;
    bVar3 = !bVar4;
    bVar4 = false;
    if (bVar3) {
      return;
    }
  } while( true );
}


