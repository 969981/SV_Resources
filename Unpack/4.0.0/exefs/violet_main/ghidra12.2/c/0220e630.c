/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0220e630; name: FUN_0220e630
 */


bool FUN_0220e630(undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  char acStack_2060 [4096];
  
  vsnprintf(acStack_2060,0x1000,param_2,acStack_2060 + 0x1020);
  uVar3 = *(undefined8 *)(param_1 + 2);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  FUN_031c68c0(acStack_2060 + 0x1020,0x1000,0xffffffff,"in \'%s\', condition: \'%s\'. %s",
               *(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6),acStack_2060);
  iVar4 = FUN_03226dd0(uVar1,acStack_2060 + 0x1020,uVar3,uVar2);
  return iVar4 != 0;
}


