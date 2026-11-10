/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f3f690; name: FUN_00f3f690
 */


undefined8
FUN_00f3f690(long param_1,long param_2,char *param_3,int param_4,uint param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined1 auStack_130 [224];
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x58) + 8);
  uVar3 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    puVar4 = (uint *)(*(long *)(*(long *)(param_1 + 0x58) + 0x10) + (long)param_4 * 4 + 8);
    do {
      if ((*puVar4 & param_5) != 0) {
        FUN_00c6ce84(auStack_130);
        uVar5 = 0;
        if ((*param_3 != '\0') && (*(long *)(param_3 + 8) != 0)) {
          FUN_00c6ce48(auStack_130,&DAT_00003010 + *(long *)(*(long *)(param_1 + 0x30) + 0x30));
          if (param_2 == 0) {
            uVar5 = 0;
          }
          else {
            iVar2 = nn::os::GetCurrentCoreNumber();
            if ((*(long *)(param_2 + 0x140) != -1) &&
               (iVar2 < *(int *)(*(long *)(param_1 + 0x58) + 8))) {
              *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x10) + (long)iVar2 * 0x9e8 + 0x7a8) =
                   *(long *)(param_2 + 0x140);
            }
            if ((*(long *)(param_2 + 0x148) != -1) &&
               (iVar2 < *(int *)(*(long *)(param_1 + 0x58) + 8))) {
              *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x10) + (long)iVar2 * 0x9e8 + 0x7b0) =
                   *(long *)(param_2 + 0x148);
            }
            FUN_00c911f4(*(undefined8 *)(param_1 + 0x58),iVar2,auStack_130,param_2);
            uVar5 = 1;
            FUN_00c90f50(*(undefined8 *)(param_1 + 0x58),iVar2,auStack_130,param_4,param_5,
                         param_6 & 1,1,param_1 + 0x1d10);
          }
        }
        FUN_00c6ce44(auStack_130);
        return uVar5;
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 0x27a;
    } while (uVar3 != 0);
  }
  return 0;
}


