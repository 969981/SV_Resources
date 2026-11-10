/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f50178; name: FUN_02f50178
 */


void FUN_02f50178(long param_1,undefined8 param_2,long param_3)

{
  size_t sVar1;
  long *plVar2;
  char acStack_2768 [10024];
  
  (**(code **)(**(long **)(param_3 + 8) + 0x28))
            (*(long **)(param_3 + 8),"BinaryBodyDebugEvent idA=",0x19);
  FUN_031c68c0(acStack_2768,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_1 + 8));
  plVar2 = *(long **)(param_3 + 8);
  sVar1 = strlen(acStack_2768);
  (**(code **)(*plVar2 + 0x28))(plVar2,acStack_2768,(long)(int)sVar1);
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),", idB=",6);
  FUN_031c68c0(acStack_2768,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_1 + 0x10));
  plVar2 = *(long **)(param_3 + 8);
  sVar1 = strlen(acStack_2768);
  (**(code **)(*plVar2 + 0x28))(plVar2,acStack_2768,(long)(int)sVar1);
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),&DAT_03c4d655,2);
  plVar2 = *(long **)(param_3 + 8);
  sVar1 = strlen((char *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x02f502b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,(char *)(param_1 + 0x18),(long)(int)sVar1);
  return;
}


