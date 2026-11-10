/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033690d4; name: FUN_033690d4
 */


void FUN_033690d4(long param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ulong extraout_x1;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined4 local_50;
  int iStack_4c;
  byte local_48;
  
  local_48 = (byte)~(byte)((uint)param_4 >> 0x18) >> 7;
  local_50 = param_2;
  iStack_4c = param_3;
  FUN_0336f418(param_1 + 0xa8,&local_50);
  if ((extraout_x1 & 1) != 0) {
    if ((-1 < (int)*(uint *)(param_1 + 0x9c)) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x9c) * 8),
       lVar1 != 0)) {
      FUN_033690d4(lVar1,param_2,param_3,param_4);
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      puVar4 = *(undefined8 **)(param_1 + 0x28);
      lVar1 = (long)*(int *)(param_1 + 0x30) << 3;
      do {
        puVar2 = (undefined8 *)
                 FUN_031e1c40(*(undefined8 *)(param_1 + 0x50),*(ulong *)*puVar4 & 0xfffffffffffffffe
                              ,0);
        if ((undefined8 *)0x1 < puVar2) {
          uVar3 = (uint)*puVar2;
          if ((uVar3 >> 0x11 & 1) == 0) {
            uVar3 = 0;
          }
          else {
            uVar5 = CONCAT44(uVar3,uVar3) & 0x1ffff0001ffff;
            uVar3 = (uint)*(ushort *)
                           (puVar2 + (ulong)(byte)(POPCOUNT((char)uVar5) +
                                                   POPCOUNT((char)(uVar5 >> 8)) +
                                                  POPCOUNT((char)(uVar5 >> 0x10))) + 2);
          }
          FUN_03368f38(param_1,*puVar4,puVar2,param_2,uVar3 + param_3,param_4);
        }
        puVar4 = puVar4 + 1;
        lVar1 = lVar1 + -8;
      } while (lVar1 != 0);
    }
  }
  return;
}


