/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00461210; name: FUN_00461210
 */


undefined8 * FUN_00461210(int param_1,undefined4 param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  if (param_1 == 0) {
    puVar6 = (undefined8 *)FUN_00452ce0(0x178,"external/openssl/crypto/rand/drbg_lib.c",0xc0);
    if (puVar6 == (undefined8 *)0x0) goto LAB_004612f0;
    uVar7 = 0;
  }
  else {
    puVar6 = (undefined8 *)thunk_FUN_00452ce0(0x178,"external/openssl/crypto/rand/drbg_lib.c",0xbf);
    if (puVar6 == (undefined8 *)0x0) {
LAB_004612f0:
      FUN_004806c0(0x24,0x6d,0x41,"external/openssl/crypto/rand/drbg_lib.c",0xc3);
      return (undefined8 *)0x0;
    }
    iVar4 = FUN_004533a0();
    uVar7 = (uint)(iVar4 != 0);
  }
  *(uint *)(puVar6 + 2) = uVar7;
  uVar5 = FUN_0047e6c0();
  puVar2 = PTR_LAB_047cd478;
  *(undefined4 *)(puVar6 + 3) = uVar5;
  puVar3 = PTR_LAB_047cd480;
  puVar6[1] = param_4;
  puVar6[0x2b] = puVar2;
  puVar6[0x2c] = puVar3;
  puVar2 = PTR_LAB_047cd490;
  if (param_4 == (long *)0x0) {
    puVar6[0x2d] = PTR_LAB_047cd488;
    puVar6[0x2e] = puVar2;
    *(undefined4 *)((long)puVar6 + 0x74) = DAT_044b6270;
    puVar6[0x10] = DAT_044b6278;
    iVar4 = FUN_00461100(puVar6,param_2,param_3);
    if (iVar4 != 0) {
      return puVar6;
    }
  }
  else {
    *(undefined4 *)((long)puVar6 + 0x74) = DAT_044b6274;
    puVar6[0x10] = DAT_044b6280;
    iVar4 = FUN_00461100(puVar6,param_2,param_3);
    if (iVar4 != 0) {
      if (*param_4 == 0) {
        if (*(int *)(puVar6 + 6) <= (int)param_4[6]) {
          return puVar6;
        }
      }
      else {
        FUN_0047e5e0();
        iVar4 = *(int *)(puVar6 + 6);
        lVar1 = param_4[6];
        if (*param_4 != 0) {
          FUN_0047e600();
        }
        if (iVar4 <= (int)lVar1) {
          return puVar6;
        }
      }
      FUN_004806c0(0x24,0x6d,0x83,"external/openssl/crypto/rand/drbg_lib.c",0xec);
    }
  }
  if (puVar6[0x2a] != 0) {
    (**(code **)(puVar6[0x2a] + 0x18))(puVar6);
  }
  FUN_00464890(puVar6[5]);
  FUN_0047e620(*puVar6);
  FUN_00444c10(0xf,puVar6,puVar6 + 0x14);
  if (*(int *)(puVar6 + 2) == 0) {
    FUN_00453260(puVar6,0x178,"external/openssl/crypto/rand/drbg_lib.c",0x115);
  }
  else {
    FUN_00453360(puVar6,0x178,"external/openssl/crypto/rand/drbg_lib.c",0x113);
  }
  return (undefined8 *)0x0;
}


