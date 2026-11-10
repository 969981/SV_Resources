/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036f9e0; name: FUN_0036f9e0
 */


void FUN_0036f9e0(ulong *param_1,char *param_2,char *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *local_60;
  size_t sStack_58;
  char *local_50;
  
  puVar2 = PTR_DAT_047cc628;
  uVar4 = *(undefined8 *)PTR_DAT_047cc628;
  sStack_58 = strlen(param_2);
  puVar1 = PTR_DAT_047cc5d0;
  local_60 = PTR_DAT_047cc5d0;
  local_50 = param_2;
  uVar3 = FUN_0049e770(PTR_FUN_047cba38,0x80);
  if (uVar3 != 0) {
    FUN_00375ccc(uVar3,uVar4,&local_60);
  }
  *param_1 = uVar3 | 2;
  if (param_3 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar5 = *(long *)puVar2;
    sStack_58 = strlen(param_3);
    local_60 = puVar1;
    local_50 = param_3;
    uVar3 = FUN_0049e770(PTR_FUN_047cba38,0x80);
    if (uVar3 != 0) {
      FUN_00375ccc(uVar3,lVar5 + 0x60,&local_60);
    }
    uVar3 = uVar3 | 2;
  }
  param_1[1] = uVar3;
  return;
}


