/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f1740; name: FUN_003f1740
 */


void FUN_003f1740(long param_1,undefined4 *param_2,int param_3,undefined4 *param_4,int param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  
  puVar4 = param_4;
  iVar5 = param_5;
  if (param_5 <= param_3) {
    puVar4 = param_2;
    param_2 = param_4;
    iVar5 = param_3;
    param_3 = param_5;
  }
  if (param_3 < 1) {
    FUN_003ee150(param_1,puVar4,iVar5,0);
    return;
  }
  puVar2 = (undefined4 *)(param_1 + (long)iVar5 * 4);
  uVar6 = FUN_003ee150(param_1,puVar4,iVar5,*param_2);
  *puVar2 = uVar6;
  if (param_3 != 1) {
    lVar7 = 0;
    do {
      lVar3 = param_1 + lVar7;
      uVar6 = FUN_003ee090(lVar3 + 4,puVar4,iVar5,*(undefined4 *)((long)param_2 + lVar7 + 4));
      *(undefined4 *)((long)puVar2 + lVar7 + 4) = uVar6;
      if (param_3 == 2) {
        return;
      }
      uVar6 = FUN_003ee090(lVar3 + 8,puVar4,iVar5,*(undefined4 *)((long)param_2 + lVar7 + 8));
      *(undefined4 *)((long)puVar2 + lVar7 + 8) = uVar6;
      if (param_3 < 4) {
        return;
      }
      uVar6 = FUN_003ee090(lVar3 + 0xc,puVar4,iVar5,*(undefined4 *)((long)param_2 + lVar7 + 0xc));
      *(undefined4 *)((long)puVar2 + lVar7 + 0xc) = uVar6;
      if (param_3 + -4 == 0) {
        return;
      }
      uVar6 = FUN_003ee090(lVar3 + 0x10,puVar4,iVar5,*(undefined4 *)((long)param_2 + lVar7 + 0x10));
      *(undefined4 *)((long)puVar2 + lVar7 + 0x10) = uVar6;
      bVar1 = 5 < param_3;
      lVar7 = lVar7 + 0x10;
      param_3 = param_3 + -4;
    } while (bVar1);
  }
  return;
}


