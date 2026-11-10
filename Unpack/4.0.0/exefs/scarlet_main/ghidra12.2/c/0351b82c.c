/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0351b82c; name: FUN_0351b82c
 */


void FUN_0351b82c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  long lVar1;
  float *pfVar2;
  byte bVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  float *pfVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  size_t __n;
  float local_64;
  
  puVar4 = PTR_DAT_047e2fd0;
  if (param_5 == 0x36) {
    local_64 = 0.0;
    pbVar6 = *(byte **)(param_4 + 0xb0);
    if (pbVar6 != (byte *)0x0) {
      bVar3 = *pbVar6;
      uVar10 = (uint)bVar3;
      if (bVar3 < 2) {
        uVar10 = 1;
      }
      uVar9 = (ulong)uVar10;
      pfVar7 = (float *)(pbVar6 + ((ulong)(bVar3 + 4) & 0x1fc));
      pbVar8 = pbVar6;
      do {
        pbVar8 = pbVar8 + 1;
        if (*pbVar8 == 0x36) goto LAB_0351b8b4;
        pfVar7 = pfVar7 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    pfVar7 = (float *)0x0;
LAB_0351b8b4:
    pfVar2 = &local_64;
    if (pfVar7 != (float *)0x0) {
      pfVar2 = pfVar7;
    }
    if ((float)param_1 - *pfVar2 != 0.0) {
      if (pbVar6 == (byte *)0x0) {
        __n = 0;
      }
      else {
        bVar3 = *pbVar6;
        __n = (size_t)bVar3;
        uVar10 = (uint)bVar3;
        if (bVar3 < 2) {
          uVar10 = 1;
        }
        uVar9 = (ulong)uVar10;
        pfVar7 = (float *)(pbVar6 + ((ulong)(bVar3 + 4) & 0x1fc));
        do {
          pbVar6 = pbVar6 + 1;
          if (*pbVar6 == 0x36) goto LAB_0351b99c;
          pfVar7 = pfVar7 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      uVar10 = (int)__n + 5U & 0x1fc;
      lVar1 = __n + 1;
      puVar5 = (undefined1 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,uVar10 + (int)lVar1 * 4);
      if (puVar5 != (undefined1 *)0x0) {
        if (*(long *)(param_4 + 0xb0) != 0) {
          memcpy(puVar5 + 1,(void *)(*(long *)(param_4 + 0xb0) + 1),__n);
          memcpy(puVar5 + uVar10,
                 (void *)(*(long *)(param_4 + 0xb0) + (ulong)((int)__n + 4U & 0x1fc)),__n << 2);
          (**(code **)(puVar4 + 0x30))(0,*(undefined8 *)(param_4 + 0xb0));
        }
        puVar5[lVar1] = 0x36;
        pfVar7 = (float *)(puVar5 + __n * 4 + (ulong)uVar10);
        *puVar5 = (char)lVar1;
        *(undefined1 **)(param_4 + 0xb0) = puVar5;
LAB_0351b99c:
        *pfVar7 = (float)param_1;
      }
      *PTR_DAT_047e74f8 = 1;
      *PTR_DAT_047e7500 = 0;
    }
  }
  FUN_034a69ec(param_1,param_2,param_3,param_4,param_5);
  return;
}


