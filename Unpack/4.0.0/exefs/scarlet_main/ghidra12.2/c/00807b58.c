/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00807b58; name: FUN_00807b58
 */


void FUN_00807b58(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  puVar2 = PTR_DAT_047d0dd8;
  if (*(long *)PTR_DAT_047d0dd8 == 0) {
    uVar3 = FUN_0078a12c();
    puVar4 = (undefined8 *)FUN_007bfa40(0x118,uVar3,8);
    if (puVar4 == (undefined8 *)0x0) {
      local_30[0] = 0x10401;
      *(undefined8 *)PTR_DAT_047d1730 = 0;
    }
    else {
      lVar5 = 0;
      do {
        puVar1 = (undefined4 *)((long)puVar4 + lVar5);
        lVar5 = lVar5 + 7;
        *puVar1 = 0;
        *(undefined2 *)(puVar1 + 1) = 0;
        *(undefined1 *)((long)puVar1 + 6) = 0;
      } while (lVar5 != 0x118);
      *(undefined8 **)PTR_DAT_047d1730 = puVar4;
      *puVar4 = 0x461c4000453b8000;
      puVar4[1] = 0x453b8000469c4000;
      puVar4[2] = 0x469c4000461c4000;
      puVar4[3] = 0x466a6000459c4000;
      puVar4[4] = 0x451c4000469c4000;
      puVar4[5] = 0x461c4000459c4000;
      puVar4[6] = 0x40a0000040800000;
      puVar4[7] = 0x4040000041000000;
      puVar4[8] = 0x4120000040a00000;
      puVar4[9] = 0x4040000040000000;
      puVar4[10] = 0x44bb800040800000;
      puVar4[0xb] = 0x459c4000451c4000;
      puVar4[0xc] = 0x4040000040000000;
      puVar4[0xd] = 0x455ac00041200000;
      puVar4[0xe] = 0x476a6000466a6000;
      puVar4[0xf] = 0x466a6000455ac000;
      puVar4[0x14] = 0x476a6000466a6000;
      puVar4[0x15] = 0x466a6000455ac000;
      puVar4[0x10] = 0x455ac000476a6000;
      puVar4[0x11] = 0x476a6000466a6000;
      puVar4[0x12] = 0x466a6000455ac000;
      puVar4[0x13] = 0x455ac000476a6000;
      puVar4[0x16] = 0x455ac000476a6000;
      puVar4[0x17] = 0x476a6000466a6000;
      puVar4[0x18] = 0x45fa0000453b8000;
      puVar4[0x19] = 0x3f800000467a0000;
      puVar4[0x1a] = 0x4120000040000000;
      puVar4[0x1b] = 0x471c4000469c4000;
      puVar4[0x1c] = 0x459c400047435000;
      puVar4[0x1d] = 0x467a000045fa0000;
      puVar4[0x1e] = 0x460ca000459c4000;
      puVar4[0x1f] = 0x469c4000468ca000;
      puVar4[0x20] = 0x471c400046ea6000;
      puVar4[0x21] = 0x466a6000461c4000;
      *(undefined4 *)(puVar4 + 0x22) = 0x46c35000;
      *(undefined2 *)((long)puVar4 + 0x114) = 0x17;
      *(undefined8 **)puVar2 = puVar4;
      rand();
      rand();
      local_30[0] = 0;
      *(undefined2 *)(PTR_DAT_047d0868 + 0x3f8) = 0;
    }
  }
  else {
    local_30[0] = 0x1040f;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


