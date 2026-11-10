/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0344ccac; name: FUN_0344ccac
 */


bool FUN_0344ccac(long param_1,char *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  byte bVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  bVar10 = *(byte *)(param_1 + 0x38);
  bVar1 = bVar10 & 0xfd;
  *(byte *)(param_1 + 0x38) = bVar1;
  puVar6 = PTR_DAT_047e2fd0;
  cVar3 = *param_2;
  if (cVar3 == -0x80) {
LAB_0344ccfc:
    bVar10 = bVar1 | 4;
LAB_0344cd2c:
    *(byte *)(param_1 + 0x38) = bVar10;
  }
  else {
    if (cVar3 == -2) {
      uVar4 = *(ushort *)(param_2 + 4);
      if (uVar4 != 0) {
        bVar7 = uVar4 < 4 || (uVar4 & 0xfffe) == 4;
        goto LAB_0344cd34;
      }
    }
    else {
      if (cVar3 != -0x70) {
        bVar10 = bVar10 | 7;
        goto LAB_0344cd2c;
      }
      if (param_2[5] == '\0') goto LAB_0344ccfc;
    }
    puVar8 = (undefined4 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x98);
    if (puVar8 == (undefined4 *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      bVar7 = false;
      goto LAB_0344cd34;
    }
    uVar12 = *(undefined8 *)param_2;
    uVar2 = *(undefined4 *)(param_2 + 8);
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
    *puVar8 = 1;
    *(undefined8 *)(puVar8 + 1) = uVar12;
    puVar8[3] = uVar2;
    *(undefined8 *)(puVar8 + 4) = uVar13;
    memset(puVar8 + 6,0,0x80);
    *(undefined4 **)(param_1 + 0x10) = puVar8;
    puVar9 = (undefined8 *)(**(code **)(puVar6 + 0x10))(0,0x80);
    *(undefined8 **)(puVar8 + 0xe) = puVar9;
    bVar7 = false;
    if (puVar9 == (undefined8 *)0x0) goto LAB_0344cd34;
    uVar11 = 0;
    *(undefined8 **)(puVar8 + 0xc) = puVar9;
    puVar8[0x10] = 4;
    do {
      puVar5 = puVar9;
      puVar5[2] = 0;
      uVar11 = uVar11 + 1;
      *(undefined2 *)(puVar5 + 3) = 0xffff;
      *puVar5 = puVar5 + 4;
      puVar9 = puVar5 + 4;
    } while (uVar11 < (uint)puVar8[0x10]);
    *puVar5 = 0;
    puVar9 = (undefined8 *)(**(code **)(puVar6 + 0x10))(0,0x60);
    *(undefined8 **)(puVar8 + 0x18) = puVar9;
    bVar7 = false;
    if (puVar9 == (undefined8 *)0x0) goto LAB_0344cd34;
    uVar11 = 0;
    *(undefined8 **)(puVar8 + 0x16) = puVar9;
    puVar8[0x1a] = 4;
    do {
      puVar5 = puVar9;
      *puVar5 = puVar5 + 3;
      uVar11 = uVar11 + 1;
      puVar9 = puVar5 + 3;
    } while (uVar11 < (uint)puVar8[0x1a]);
    *puVar5 = 0;
  }
  bVar7 = true;
LAB_0344cd34:
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)param_2;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  return bVar7;
}


