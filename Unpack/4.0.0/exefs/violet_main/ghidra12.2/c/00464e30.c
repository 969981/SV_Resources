/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00464e30; name: FUN_00464e30
 */


undefined8 FUN_00464e30(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = FUN_0047e650(&DAT_047f1a88,&LAB_00464bf0);
  if ((iVar2 != 0) && (DAT_047f1a8c != 0)) {
    FUN_0047e5e0(DAT_047f1aa0);
    if (DAT_047f1a98 == (undefined *)0x0) {
      DAT_047f1a98 = PTR_PTR_047cd498;
    }
    puVar1 = DAT_047f1a98;
    FUN_0047e600(DAT_047f1aa0);
    puVar3 = (undefined *)FUN_004626b0();
    if (puVar1 != puVar3) {
      iVar2 = FUN_0047e650(&DAT_047f1a88,&LAB_00464bf0);
      if ((iVar2 != 0) && (DAT_047f1a8c != 0)) {
        FUN_0047e5e0(DAT_047f1aa0);
        puVar3 = DAT_047f1a98;
        puVar1 = PTR_PTR_047cd498;
        if (DAT_047f1a98 == (undefined *)0x0) {
          DAT_047f1a98 = PTR_PTR_047cd498;
          FUN_0047e600(DAT_047f1aa0);
          UNRECOVERED_JUMPTABLE = *(code **)(puVar1 + 8);
        }
        else {
          FUN_0047e600(DAT_047f1aa0);
          UNRECOVERED_JUMPTABLE = *(code **)(puVar3 + 8);
        }
        if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00464f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
          return uVar4;
        }
      }
      FUN_004806c0(0x24,100,0x65,"external/openssl/crypto/rand/rand_lib.c",0x3ae);
      return 0xffffffff;
    }
  }
  lVar5 = FUN_004622f0();
  if (lVar5 == 0) {
    return 0;
  }
  uVar4 = FUN_00461cf0(lVar5,param_1,(long)param_2);
  return uVar4;
}


