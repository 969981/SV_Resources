/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0344512c; name: FUN_0344512c
 */


undefined8 FUN_0344512c(long param_1,byte param_2,uint param_3,void *param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  void *__dest;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float *pfVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  float fVar10;
  
  uVar7 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
  if (uVar7 != 0) {
    uVar1 = 0;
    if (uVar7 != 0) {
      uVar1 = (uint)param_1 / uVar7;
    }
    puVar4 = *(undefined8 **)
              (*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
              (ulong)((uint)param_1 - uVar1 * uVar7) * 8);
    if (puVar4 != (undefined8 *)0x0) {
      puVar5 = puVar4;
      do {
        if (puVar5[1] == param_1) {
          if ((puVar5[2] != 0) && (lVar3 = *(long *)(puVar5[2] + 0x40), lVar3 != 0))
          goto LAB_034451ec;
          break;
        }
        puVar5 = (undefined8 *)*puVar5;
      } while (puVar5 != (undefined8 *)0x0);
      while( true ) {
        if (puVar4 == (undefined8 *)0x0) {
          return 0x1f;
        }
        if (puVar4[1] == param_1) break;
        puVar4 = (undefined8 *)*puVar4;
      }
      if (puVar4[2] == 0) {
        return 0x1f;
      }
      lVar3 = FUN_03445338();
      if (lVar3 == 0) {
        return 0x34;
      }
LAB_034451ec:
      plVar9 = (long *)(lVar3 + 0x20);
      *(byte *)(lVar3 + 0x88) = param_2 & 1;
      puVar2 = PTR_DAT_047e2fd0;
      if (*plVar9 != 0) {
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4);
        *(undefined8 *)(lVar3 + 0x28) = 0;
        *(undefined8 *)(lVar3 + 0x30) = 0;
        *plVar9 = 0;
      }
      if (param_4 == (void *)0x0) {
        return 1;
      }
      uVar7 = param_3 & 0xff;
      uVar8 = (ulong)uVar7;
      if ((param_3 & 0xff) == 0) {
        return 0x4e;
      }
      uVar1 = uVar7 + 3 >> 2;
      __dest = (void *)(**(code **)(puVar2 + 0x18))(4,uVar1 << 5,0x10);
      *plVar9 = (long)__dest;
      if (__dest == (void *)0x0) {
        return 2;
      }
      *(uint *)(lVar3 + 0x38) = param_3;
      *(void **)(lVar3 + 0x28) = __dest;
      *(ulong *)(lVar3 + 0x30) = (long)__dest + (ulong)(uVar1 << 4);
      memcpy(__dest,param_4,(ulong)(uVar7 << 2));
      memcpy(*(void **)(lVar3 + 0x30),*(void **)(lVar3 + 0x28),(ulong)(uVar7 << 2));
      pfVar6 = *(float **)(lVar3 + 0x30);
      do {
        fVar10 = 0.0;
        if (-37.0 <= *pfVar6 * 0.05) {
          uVar7 = (uint)(*pfVar6 * 1393317.6 + 1.0653532e+09);
          fVar10 = (float)(uVar7 & 0x7fffff | 0x3f800000);
          fVar10 = (fVar10 * (fVar10 * 0.32518977 + 0.020805772) + 0.65304345) *
                   (float)(uVar7 & 0xff800000);
        }
        uVar8 = uVar8 - 1;
        *pfVar6 = fVar10;
        pfVar6 = pfVar6 + 1;
      } while (uVar8 != 0);
      return 1;
    }
  }
  return 0x1f;
}


