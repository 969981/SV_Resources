/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045b7a0; name: FUN_0045b7a0
 */


undefined8 FUN_0045b7a0(ulong param_1,undefined4 param_2,ulong param_3)

{
  int iVar1;
  ulong *puVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_0047e650(&DAT_047f19c8,&LAB_0045b650);
  if (iVar1 == 0) {
    return 0;
  }
  if (DAT_047f19cc == 0) {
    return 0;
  }
  puVar2 = (ulong *)FUN_00452c30(0x18,"external/openssl/crypto/objects/o_names.c",0xdb);
  uVar5 = 0;
  if (puVar2 != (ulong *)0x0) {
    *puVar2 = CONCAT44(param_2,param_2) & DAT_03cb5528;
    puVar2[1] = param_1;
    puVar2[2] = param_3;
    FUN_0047e5e0(DAT_047f19d8);
    piVar3 = (int *)FUN_004515c0(DAT_047f19e8,puVar2);
    if (piVar3 == (int *)0x0) {
      iVar1 = FUN_00451cf0(DAT_047f19e8);
      if (iVar1 != 0) {
        FUN_00452f80(puVar2,"external/openssl/crypto/objects/o_names.c",0xf9);
        uVar5 = 0;
        goto LAB_0045b8b0;
      }
    }
    else {
      if ((DAT_047f19e0 != 0) && (iVar1 = FUN_0047e430(), *piVar3 < iVar1)) {
        lVar4 = FUN_0047e450(DAT_047f19e0);
        (**(code **)(lVar4 + 0x10))(*(undefined8 *)(piVar3 + 2),*piVar3,*(undefined8 *)(piVar3 + 4))
        ;
      }
      FUN_00452f80(piVar3,"external/openssl/crypto/objects/o_names.c",0xf5);
    }
    uVar5 = 1;
  }
LAB_0045b8b0:
  FUN_0047e600(DAT_047f19d8);
  return uVar5;
}


