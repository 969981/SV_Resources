/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ce790; name: FUN_003ce790
 */


undefined8 FUN_003ce790(long param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ushort *puVar10;
  ushort *local_38;
  
  lVar3 = FUN_0047de20(&LAB_003ce960);
  if (lVar3 == 0) {
    uVar4 = 0x50;
    uVar5 = 0x41;
    uVar6 = 0x8fb;
  }
  else {
    uVar1 = param_2[1] - 2;
    if (1 < (ulong)param_2[1]) {
      puVar10 = (ushort *)*param_2 + 1;
      uVar8 = (ulong)*(ushort *)*param_2;
      uVar8 = ((uVar8 & 0xff00) << 0x28 | uVar8 << 0x38) >> 0x30;
      if (uVar8 <= uVar1) {
        *param_2 = (long)puVar10 + uVar8;
        param_2[1] = uVar1 - uVar8;
        do {
          if (uVar8 == 0) {
            FUN_0047e3b0(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x260),PTR_FUN_047cca78);
            *(long *)(*(long *)(param_1 + 0xa8) + 0x260) = lVar3;
            return 1;
          }
          if (uVar8 == 1) {
LAB_003ce8e0:
            uVar4 = 0x32;
            uVar5 = 0x9f;
            uVar6 = 0x90c;
            goto LAB_003ce814;
          }
          uVar1 = (((ulong)*puVar10 & 0xff00) << 0x28 | (ulong)*puVar10 << 0x38) >> 0x30;
          uVar7 = uVar8 - 2;
          uVar8 = uVar7 - uVar1;
          if (uVar7 < uVar1) goto LAB_003ce8e0;
          local_38 = puVar10 + 1;
          lVar9 = FUN_0048b9b0(0,&local_38,uVar1);
          if (lVar9 == 0) {
            uVar4 = 0x32;
            uVar5 = 0xd;
            uVar6 = 0x913;
            goto LAB_003ce94c;
          }
          puVar10 = (ushort *)((long)(puVar10 + 1) + uVar1);
          if (local_38 != puVar10) {
            uVar4 = 0x32;
            uVar5 = 0x83;
            uVar6 = 0x918;
            goto LAB_003ce94c;
          }
          iVar2 = FUN_0047e2f0(lVar3,lVar9);
        } while (iVar2 != 0);
        uVar4 = 0x50;
        uVar5 = 0x41;
        uVar6 = 0x91e;
LAB_003ce94c:
        FUN_003c3950(param_1,uVar4,0x21d,uVar5,"external/openssl/ssl/statem/statem_lib.c",uVar6);
        goto LAB_003ce820;
      }
    }
    uVar4 = 0x32;
    uVar5 = 0x9f;
    uVar6 = 0x901;
  }
LAB_003ce814:
  FUN_003c3950(param_1,uVar4,0x21d,uVar5,"external/openssl/ssl/statem/statem_lib.c",uVar6);
  lVar9 = 0;
LAB_003ce820:
  FUN_0047e3b0(lVar3,PTR_FUN_047cca78);
  FUN_0048b9e0(lVar9);
  return 0;
}


