/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c64e8; name: FUN_034c64e8
 */


undefined8 FUN_034c64e8(long param_1,long param_2,float *param_3,uint param_4,byte param_5)

{
  uint uVar1;
  undefined *puVar2;
  void *__s;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_44 [4];
  
  puVar2 = PTR_DAT_047e2fd0;
  uVar4 = *(uint *)(param_1 + 0x38);
  if (uVar4 != 0) {
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = (uint)param_2 / uVar4;
    }
    for (plVar5 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)((uint)param_2 - uVar1 * uVar4) * 8)
        ; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5[1] == param_2) {
        lVar6 = *(long *)(plVar5[2] + 0x28);
        if (lVar6 == 0) {
          uVar3 = 2;
          if (param_4 == 0) {
            return 2;
          }
          goto LAB_034c665c;
        }
        uVar4 = (uint)*(ushort *)(lVar6 + 0x38);
        if (*(ushort *)(lVar6 + 0x38) != param_4) {
          if (*(long *)(lVar6 + 0x20) != 0) {
            *(undefined2 *)(lVar6 + 0x38) = 0;
            (**(code **)(puVar2 + 0x30))(5);
            *(undefined8 *)(lVar6 + 0x20) = 0;
          }
          if (param_4 == 0) {
            uVar4 = (uint)*(ushort *)(lVar6 + 0x38);
          }
          else {
            __s = (void *)(**(code **)(puVar2 + 0x10))(5,(ulong)param_4 * 0x28);
            if (__s == (void *)0x0) goto LAB_034c663c;
            memset(__s,0,(ulong)param_4 * 0x28);
            *(void **)(lVar6 + 0x20) = __s;
            *(short *)(lVar6 + 0x38) = (short)param_4;
            uVar4 = param_4;
          }
        }
        if ((uVar4 & 0xffff) != 0) {
          lVar7 = 0;
          uVar8 = 0;
          do {
            memcpy((void *)(*(long *)(lVar6 + 0x20) + lVar7),(void *)((long)param_3 + lVar7),0x24);
            *(undefined4 *)(*(long *)(lVar6 + 0x20) + lVar7 + 0x24) =
                 *(undefined4 *)((long)param_3 + lVar7 + 0x24);
            uVar8 = uVar8 + 1;
            lVar7 = lVar7 + 0x28;
          } while (uVar8 < *(ushort *)(lVar6 + 0x38));
        }
LAB_034c663c:
        *(byte *)(lVar6 + 0x3a) = *(byte *)(lVar6 + 0x3a) & 0xf8 | param_5 & 7;
        uVar3 = 1;
        *(byte *)(lVar6 + 0x54) = *(byte *)(lVar6 + 0x54) | 1;
        if (param_4 == 0) {
          return 1;
        }
LAB_034c665c:
        lVar6 = *(long *)(plVar5[2] + 0x40);
        if (lVar6 == 0) {
          return uVar3;
        }
        memcpy((void *)(lVar6 + 0x60),param_3,0x24);
        fVar9 = param_3[4];
        fVar10 = param_3[5];
        fVar12 = *param_3;
        fVar11 = param_3[1];
        fVar13 = param_3[2];
        fVar14 = param_3[3];
        *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(lVar6 + 0x6c);
        *(undefined4 *)(lVar6 + 0x50) = *(undefined4 *)(lVar6 + 0x74);
        *(undefined8 *)(lVar6 + 0x54) = *(undefined8 *)(lVar6 + 0x60);
        *(undefined4 *)(lVar6 + 0x5c) = *(undefined4 *)(lVar6 + 0x68);
        *(float *)(lVar6 + 0x3c) = fVar13 * fVar9 - fVar11 * fVar10;
        *(float *)(lVar6 + 0x40) = fVar12 * fVar10 - fVar14 * fVar13;
        *(float *)(lVar6 + 0x44) = fVar14 * fVar11 - fVar12 * fVar9;
        FUN_03411c9c(PTR_DAT_047e6d80,*(undefined8 *)(*(long *)(lVar6 + 8) + 0x78),auStack_44);
        return 1;
      }
    }
  }
  return 2;
}


