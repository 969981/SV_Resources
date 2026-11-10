/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079eb7c; name: FUN_0079eb7c
 */


void FUN_0079eb7c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [20];
  char local_34;
  int local_30;
  int iStack_2c;
  undefined4 local_24;
  
  FUN_007a42f0(auStack_48,*param_2,*(undefined4 *)((long)param_2 + 0xc),0);
  uVar1 = FUN_007a4440(auStack_48);
  if ((((uVar1 & 1) != 0) && (*(int *)((long)param_2 + 0xc) == iStack_2c + local_30)) &&
     (local_34 == 'Q')) {
    uVar3 = *(undefined8 *)(param_1 + 0x1170);
    FUN_00796828(uVar3,param_3);
    if (*(short *)(param_1 + 0x114e) != 0) {
      uVar1 = 0;
      do {
        uVar2 = FUN_007967e8(*(long *)(*(long *)(param_1 + 0x88) + uVar1 * 8) + 0x10,uVar3);
        if ((uVar2 & 1) != 0) {
          if ((short)uVar1 < 0) {
            return;
          }
          FUN_007ab950(*(undefined8 *)(param_1 + 400),uVar1 & 0xffffffff,local_24);
          return;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(ushort *)(param_1 + 0x114e));
    }
  }
  return;
}


