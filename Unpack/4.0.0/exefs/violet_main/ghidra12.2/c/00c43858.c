/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c43858; name: FUN_00c43858
 */


void FUN_00c43858(long param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  size_t __n;
  ulong uVar5;
  long lVar6;
  undefined1 uVar7;
  uint uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *__dest;
  long *plVar13;
  uint uVar14;
  
  bVar3 = *(byte *)(param_1 + 300);
  uVar8 = (uint)bVar3;
  if ((*(byte *)(param_1 + 0x12e) != bVar3) && (*(char *)(param_1 + 0x132) == '\0')) {
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xb0);
    *(long *)(param_1 + 0x120) = param_1 + 0x78;
    goto LAB_00c43a60;
  }
  puVar11 = (undefined8 *)(param_1 + 0xb0);
  *(byte *)(param_1 + 0x12e) = bVar3;
  *(undefined8 *)(param_1 + 0xb8) = *puVar11;
  puVar12 = (undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xf0) = *puVar12;
  __dest = *(undefined8 **)(param_1 + 0x40);
  puVar10 = *(undefined8 **)(param_1 + 0x48);
  *(undefined8 **)(param_1 + 0x120) = puVar12;
  if (__dest != puVar10) {
    uVar14 = 0xff;
    do {
      plVar13 = (long *)*__dest;
      plVar1 = plVar13 + 1;
      iVar4 = *(byte *)((long)plVar13 + 0x49) - uVar8;
      if (iVar4 == 0) {
        uVar5 = (**(code **)(*plVar13 + 0x18))(plVar13,param_2);
        if ((uVar5 & 1) == 0) {
          FUN_00c43b2c(puVar11,plVar1);
        }
        else {
          plVar13[5] = plVar13[5] | 1;
        }
        lVar6 = (**(code **)PTR_PTR_047d9ab8)(*(undefined1 *)((long)plVar13 + 0x4a),param_2);
        pcVar9 = (code *)plVar13[7];
        plVar13[3] = lVar6;
        plVar1 = (long *)(param_1 + (plVar13[8] >> 1));
        if ((plVar13[8] & 1U) != 0) {
          pcVar9 = *(code **)(pcVar9 + *plVar1);
        }
        uVar8 = (*pcVar9)(plVar1,*__dest);
        *(char *)((long)plVar13 + 0x4a) = (char)uVar8;
        if ((~uVar8 & 0xff) != 0) {
          uVar2 = uVar8;
          if ((uVar14 & 0xff) <= (uVar8 & 0xff)) {
            uVar2 = uVar14;
          }
          *(char *)((long)plVar13 + 0x49) =
               (char)(((uint)*(byte *)(param_1 + 300) + (uVar8 & 0xff)) % 0x3c);
          uVar14 = uVar2;
          goto LAB_00c4396c;
        }
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + -8;
        __n = *(long *)(param_1 + 0x48) - (long)(__dest + 1);
joined_r0x00c43acc:
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        *(size_t *)(param_1 + 0x48) = (long)__dest + __n;
        *(undefined1 *)((long)plVar13 + 0x4c) = 0;
      }
      else {
        if ((char)plVar13[6] == -0x7d) {
          uVar5 = (**(code **)(*plVar13 + 0x18))(plVar13,param_2);
          if ((uVar5 & 1) == 0) {
            FUN_00c43b2c(puVar11,plVar1);
          }
          lVar6 = (**(code **)PTR_PTR_047d9ab8)(1,param_2);
          plVar13[3] = lVar6;
        }
        else {
          if ((char)plVar13[9] == '\0') {
            __n = (long)puVar10 - (long)(__dest + 1);
            goto joined_r0x00c43acc;
          }
          if (*(char *)((long)plVar13 + 0x4a) != -1) {
            uVar8 = (iVar4 + 0x3c) % 0x3c;
            if ((uVar14 & 0xff) <= (uVar8 & 0xff)) {
              uVar8 = uVar14;
            }
            uVar14 = uVar8;
          }
          if ((plVar13[0xb] != 0) &&
             (uVar5 = (**(code **)(*plVar13 + 0x18))(plVar13,param_2), (uVar5 & 1) == 0)) {
            FUN_00c43b2c(puVar12,plVar1);
          }
        }
LAB_00c4396c:
        __dest = __dest + 1;
      }
      puVar10 = *(undefined8 **)(param_1 + 0x48);
      if (__dest == puVar10) goto LAB_00c43a34;
      uVar8 = (uint)*(byte *)(param_1 + 300);
    } while( true );
  }
LAB_00c43abc:
  uVar7 = 0xff;
LAB_00c43a58:
  *(undefined1 *)(param_1 + 0x12e) = uVar7;
  uVar8 = (uint)*(byte *)(param_1 + 300);
LAB_00c43a60:
  *(undefined1 *)(param_1 + 0x132) = 0;
  *(char *)(param_1 + 300) = (char)((uVar8 + 1) % 0x3c);
  return;
LAB_00c43a34:
  if ((~uVar14 & 0xff) == 0) goto LAB_00c43abc;
  uVar7 = (undefined1)(((uint)*(byte *)(param_1 + 0x12e) + (uVar14 & 0xff)) % 0x3c);
  goto LAB_00c43a58;
}


