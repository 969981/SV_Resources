/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00461ac0; name: FUN_00461ac0
 */


undefined8
FUN_00461ac0(long param_1,undefined8 param_2,ulong param_3,int param_4,undefined8 param_5,
            ulong param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  time_t tVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(int *)(param_1 + 0x98) != 1) {
    FUN_00461890(param_1,0,0,0);
    if (*(int *)(param_1 + 0x98) == 0) {
      uVar5 = 0x73;
      uVar6 = 0x250;
      goto LAB_00461cd0;
    }
    if (*(int *)(param_1 + 0x98) == 2) {
      uVar5 = 0x72;
      uVar6 = 0x24c;
      goto LAB_00461cd0;
    }
  }
  if (*(ulong *)(param_1 + 0x38) < param_3) {
    uVar5 = 0x75;
    uVar6 = 0x256;
  }
  else if (*(ulong *)(param_1 + 0x68) < param_6) {
    uVar5 = 0x66;
    uVar6 = 0x25a;
  }
  else {
    iVar3 = FUN_0047e6c0();
    bVar2 = *(int *)(param_1 + 0x18) != iVar3;
    if (bVar2) {
      *(int *)(param_1 + 0x18) = iVar3;
      uVar1 = *(uint *)(param_1 + 0x74);
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x74);
    }
    if ((uVar1 != 0) && (uVar1 <= *(uint *)(param_1 + 0x70))) {
      bVar2 = true;
    }
    if (0 < *(long *)(param_1 + 0x80)) {
      tVar4 = time((time_t *)0x0);
      if ((tVar4 < *(long *)(param_1 + 0x78)) ||
         (*(long *)(param_1 + 0x80) <= tVar4 - *(long *)(param_1 + 0x78))) {
        bVar2 = true;
      }
    }
    if (((*(int *)(param_1 + 0x88) != 0) && (*(long *)(param_1 + 8) != 0)) &&
       (*(int *)(param_1 + 0x8c) != *(int *)(*(long *)(param_1 + 8) + 0x8c))) {
      bVar2 = true;
    }
    if (bVar2 || param_4 != 0) {
      iVar3 = FUN_004616c0(param_1,param_5,param_6,param_4);
      if (iVar3 == 0) {
        uVar5 = 0x76;
        uVar6 = 0x276;
        goto LAB_00461cd0;
      }
      param_6 = 0;
      param_5 = 0;
    }
    iVar3 = (**(code **)(*(long *)(param_1 + 0x150) + 0x10))
                      (param_1,param_2,param_3,param_5,param_6);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x98) = 2;
    uVar6 = 0x27f;
    uVar5 = 0x70;
  }
LAB_00461cd0:
  FUN_004806c0(0x24,0x6b,uVar5,"external/openssl/crypto/rand/drbg_lib.c",uVar6);
  return 0;
}


