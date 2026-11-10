/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f5004c; name: FUN_02f5004c
 */


void FUN_02f5004c(long param_1,undefined8 param_2,long param_3)

{
  size_t sVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  char acStack_2768 [10024];
  
  (**(code **)(**(long **)(param_3 + 8) + 0x28))
            (*(long **)(param_3 + 8),"TriggerEvent bodyIds=",0x15);
  FUN_031c68c0(acStack_2768,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_1 + 8));
  plVar4 = *(long **)(param_3 + 8);
  sVar1 = strlen(acStack_2768);
  (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2768,(long)(int)sVar1);
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),&DAT_03c16438,1);
  FUN_031c68c0(acStack_2768,0x2728,0x2728,&DAT_03c62bc7,*(undefined8 *)(param_1 + 0x10));
  plVar4 = *(long **)(param_3 + 8);
  sVar1 = strlen(acStack_2768);
  (**(code **)(*plVar4 + 0x28))(plVar4,acStack_2768,(long)(int)sVar1);
  if (*(char *)(param_1 + 0x1c) == '\0') {
    pcVar2 = " Status=Entered";
    uVar3 = 0xf;
  }
  else {
    pcVar2 = " Status=Exited";
    uVar3 = 0xe;
  }
                    /* WARNING: Could not recover jumptable at 0x02f50174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_3 + 8) + 0x28))(*(long **)(param_3 + 8),pcVar2,uVar3);
  return;
}


