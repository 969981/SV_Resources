/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01900424; name: FUN_01900424
 */


void FUN_01900424(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  int local_68 [4];
  int local_58 [4];
  undefined4 local_48 [2];
  
  uVar4 = FUN_007e6070();
  if ((uVar4 & 1) == 0) {
    local_58[0] = 0x1040c;
LAB_01900490:
    local_68[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
  }
  else {
    uVar4 = FUN_007e6080();
    puVar2 = PTR_DAT_047d0860;
    if ((uVar4 & 1) == 0) {
      local_58[0] = 0x10408;
      goto LAB_01900490;
    }
    if (*(long *)PTR_DAT_047d0860 != 0) {
      local_58[0] = 0x1040f;
      goto LAB_01900490;
    }
    if (*(int *)(param_2 + 0x18) < 0) {
      local_58[0] = 0x10407;
      goto LAB_01900490;
    }
    uVar5 = FUN_0078a12c();
    puVar6 = (undefined8 *)FUN_007bfa40(0xd8,uVar5,8);
    if (puVar6 == (undefined8 *)0x0) {
      local_58[0] = 0x10401;
      *(undefined8 *)PTR_DAT_047d1560 = 0;
      goto LAB_01900490;
    }
    lVar8 = 0;
    do {
      puVar1 = (undefined4 *)((long)puVar6 + lVar8);
      lVar8 = lVar8 + 6;
      *puVar1 = 0;
      *(undefined2 *)(puVar1 + 1) = 0;
      puVar3 = PTR_DAT_047d1560;
    } while (lVar8 != 0xd8);
    *(undefined8 **)PTR_DAT_047d1560 = puVar6;
    *puVar6 = 0;
    FUN_007935cc(puVar6);
    puVar6[1] = 0;
    FUN_007ec690(puVar6 + 2);
    puVar6[8] = 0;
    puVar6[9] = 0;
    *(undefined4 *)(puVar6 + 10) = 0;
    *(undefined4 *)(puVar6 + 0x13) = 0;
    puVar6[0x14] = 0;
    *(undefined2 *)(puVar6 + 0x15) = 0;
    *(undefined8 *)((long)puVar6 + 0xac) = 0;
    *(undefined8 *)((long)puVar6 + 0xb4) = 0;
    *(undefined4 *)((long)puVar6 + 0xbc) = 0;
    *(undefined1 *)(puVar6 + 0x18) = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    local_58[0] = 0;
    local_68[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
    FUN_00cbd7c0((long)puVar6 + 0xc4,local_58);
    *(undefined8 **)puVar2 = puVar6;
    FUN_007f644c(local_58,puVar6,param_2);
    if (local_58[0] == 0) {
      local_68[0] = 0;
      local_48[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_48);
      piVar7 = local_68;
      goto LAB_019004a8;
    }
    FUN_007ec6c8(*(long *)puVar2 + 0x10);
    lVar8 = *(long *)puVar3;
    *(undefined8 *)puVar2 = 0;
    if (lVar8 != 0) {
      FUN_007bfae0(lVar8);
      FUN_007bfaa0(lVar8);
      *(undefined8 *)puVar3 = 0;
    }
  }
  piVar7 = local_58;
LAB_019004a8:
  FUN_00cbd7c0(param_1,piVar7);
  return;
}


