/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048a580; name: FUN_0048a580
 */


undefined8 FUN_0048a580(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar5 = *param_1;
  iVar3 = FUN_0047e430(uVar5);
  iVar6 = iVar3;
  if (param_3 <= iVar3 && -1 < param_3) {
    iVar6 = param_3;
  }
  bVar2 = param_4 == 0;
  *(undefined4 *)(param_1 + 1) = 1;
  if (param_4 == -1) {
    if (iVar6 == 0) {
      iVar3 = 0;
      bVar2 = true;
      lVar4 = FUN_0048b990(param_2);
      goto joined_r0x0048a634;
    }
    iVar1 = iVar6 + -1;
  }
  else {
    iVar1 = iVar6;
    if (iVar3 <= iVar6) {
      if (iVar6 == 0) {
        iVar3 = 0;
        lVar4 = FUN_0048b990(param_2);
      }
      else {
        lVar4 = FUN_0047e450(uVar5,iVar6 + -1);
        iVar3 = *(int *)(lVar4 + 0x10) + 1;
        lVar4 = FUN_0048b990(param_2);
      }
      goto joined_r0x0048a634;
    }
  }
  lVar4 = FUN_0047e450(uVar5,iVar1);
  iVar3 = *(int *)(lVar4 + 0x10);
  lVar4 = FUN_0048b990(param_2);
joined_r0x0048a634:
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x10) = iVar3;
    iVar3 = FUN_0047df50(uVar5,lVar4,iVar6);
    if (iVar3 != 0) {
      if (bVar2) {
        iVar3 = FUN_0047e430(uVar5);
        iVar6 = iVar6 + 1;
        if (iVar6 < iVar3) {
          do {
            lVar4 = FUN_0047e450(uVar5,iVar6);
            iVar6 = iVar6 + 1;
            *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
          } while (iVar3 != iVar6);
        }
      }
      return 1;
    }
    FUN_004806c0(0xb,0x71,0x41,"external/openssl/crypto/x509/x509name.c",0xe3);
  }
  FUN_0048b980(lVar4);
  return 0;
}


