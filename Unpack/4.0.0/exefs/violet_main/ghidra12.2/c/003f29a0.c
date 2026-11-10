/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f29a0; name: FUN_003f29a0
 */


void FUN_003f29a0(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  param_1[(long)(int)param_3 * 2 + -1] = 0;
  *param_1 = 0;
  if (1 < (int)param_3) {
    uVar3 = FUN_003ee150(param_1 + 1,param_2 + 1,(long)(int)param_3 - 1U & 0xffffffff,*param_2);
    (param_1 + 1)[(long)(int)param_3 - 1U] = uVar3;
    if (param_3 - 2 != 0) {
      puVar7 = param_1 + param_3;
      puVar5 = param_1 + 3;
      puVar6 = param_2 + 2;
      iVar4 = param_3 - 2;
      do {
        puVar7 = puVar7 + 1;
        uVar3 = FUN_003ee090(puVar5,puVar6,iVar4,puVar6[-1]);
        puVar5 = puVar5 + 2;
        iVar2 = iVar4 + -1;
        puVar6 = puVar6 + 1;
        *puVar7 = uVar3;
        bVar1 = 0 < iVar4;
        iVar4 = iVar2;
      } while (iVar2 != 0 && bVar1);
    }
  }
  FUN_003ee580(param_1,param_1,param_1,param_3 << 1);
  FUN_003ee240(param_4,param_2,(ulong)param_3);
  FUN_003ee580(param_1,param_1,param_4,param_3 << 1);
  return;
}


