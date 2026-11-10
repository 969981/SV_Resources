/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 035211f0; name: FUN_035211f0
 */


void FUN_035211f0(long param_1,long *param_2,undefined4 param_3,uint param_4)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  bool bVar11;
  ulong uVar12;
  char cVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  ushort local_70 [2];
  char local_6c;
  char local_6b;
  
  uVar4 = *(undefined4 *)(param_1 + 0x154);
  lVar1 = param_1 + 0xf0;
  uVar5 = *(undefined4 *)(param_1 + 0x158);
  uVar6 = *(undefined4 *)(param_1 + 0x150);
  iVar7 = *(int *)(param_1 + 0x14c);
  FUN_035219bc(lVar1);
  if (param_4 != 0) {
    uVar18 = 0;
    do {
      local_70[0] = 0xff00;
      do {
        if (((*(byte *)(param_1 + 0x15c) >> 1 & 1) == 0) || (*(long *)(param_1 + 0x128) == 0)) {
          bVar11 = false;
        }
        else {
          bVar9 = *(byte *)(param_1 + 0x134);
          bVar11 = false;
          if (((char)bVar9 < '\0') && ((bVar9 & 0xf0) != 0xf0)) {
            bVar2 = bVar9;
            if (bVar9 < 0xf0) {
              bVar2 = bVar9 & 0xf0;
            }
            local_70[0] = CONCAT11(bVar9,bVar2) & 0xfff;
            local_6c = *(char *)(param_1 + 0x135);
            local_6b = *(char *)(param_1 + 0x136);
            bVar11 = true;
            if ((bVar2 == 0x90) && (local_6b == '\0')) {
              bVar11 = true;
              local_70[0] = CONCAT11(local_70[0]._1_1_,0x80);
            }
          }
        }
        uVar8 = *(uint *)(param_1 + 0x14c);
        uVar12 = FUN_03521af8(lVar1);
      } while ((!bVar11) && ((uVar12 & 1) != 0));
      if ((!bVar11) || (param_4 < uVar8)) break;
      if ((char)local_70[0] == -0x50) {
        puVar16 = (undefined8 *)param_2[1];
        if (puVar16 != (undefined8 *)0x0) {
          puVar14 = (undefined8 *)0x0;
          cVar13 = -0x50;
          while( true ) {
            if (((cVar13 == -0x50) && (*(char *)(puVar16 + 1) == -0x50)) &&
               (*(char *)((long)puVar16 + 0xc) == local_6c)) {
              puVar15 = (undefined8 *)puVar16[4];
              plVar3 = param_2 + 1;
              if ((undefined8 *)param_2[1] != puVar16) {
                plVar3 = puVar14 + 4;
              }
              *plVar3 = (long)puVar15;
              if ((undefined8 *)*param_2 == puVar16) {
                *param_2 = (long)puVar14;
              }
              puVar17 = (undefined8 *)*puVar16;
              iVar10 = *(int *)((long)puVar17 + 0x4c) + -1;
              *(int *)((long)puVar17 + 0x4c) = iVar10;
              if (iVar10 == 0) {
                (**(code **)*puVar17)(puVar17);
                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar17);
              }
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar16);
            }
            else {
              puVar15 = (undefined8 *)puVar16[4];
              puVar14 = puVar16;
            }
            puVar16 = puVar15;
            if (puVar16 == (undefined8 *)0x0) break;
            cVar13 = (char)local_70[0];
          }
        }
        FUN_0344da38(param_1,param_2,local_70,param_3,uVar8,0,0);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != param_4);
  }
  FUN_035219bc(lVar1);
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    FUN_03521af8(lVar1);
  }
  *(undefined4 *)(param_1 + 0x150) = uVar6;
  *(undefined4 *)(param_1 + 0x154) = uVar4;
  *(undefined4 *)(param_1 + 0x158) = uVar5;
  return;
}


