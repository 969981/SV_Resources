/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0173ce48; name: FUN_0173ce48
 */


void FUN_0173ce48(long param_1)

{
  long lVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(ushort *)(param_1 + 0x200);
  if ((ulong)uVar2 != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x90);
    *(undefined8 *)(lVar6 + 0x80) = 0;
    *(undefined8 *)(lVar6 + 0x88) = 0;
    *(undefined8 *)(lVar6 + 0x90) = 0;
    *(ulong *)(lVar6 + 0xa0) = (ulong)uVar2;
    *(undefined1 *)(lVar6 + 0x98) = 0;
    nn::os::GetSystemTick();
    uVar3 = nn::os::ConvertToTimeSpan();
    *(undefined8 *)(lVar6 + 0x80) = uVar3;
    *(undefined1 *)(lVar6 + 0x98) = 1;
    if ((*(char *)(lVar6 + 0x99) == '\0') && (*(char *)(lVar6 + 0x9a) == '\0')) {
      nn::os::GetSystemTick();
      lVar4 = nn::os::ConvertToTimeSpan();
      lVar1 = *(long *)(lVar6 + 0x80);
      *(undefined8 *)(lVar6 + 0x80) = 0;
      *(long *)(lVar6 + 0x88) = (lVar4 - lVar1) + *(long *)(lVar6 + 0x88);
      *(long *)(lVar6 + 0x90) = lVar4;
    }
    *(undefined1 *)(lVar6 + 0x99) = 1;
    FUN_0173cc1c(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x90),2,0);
    (**(code **)(**(long **)(param_1 + 0x218) + 0x5c0))(*(long **)(param_1 + 0x218),2,1);
    *(undefined1 *)(param_1 + 0x122) = 0;
  }
  if (*(short *)(param_1 + 0x204) != 0) {
    uVar5 = (ulong)*(ushort *)
                    (*(long *)(param_1 + 0x30) + (ulong)*(byte *)(param_1 + 0x11c) * 2 + 0x98);
    if (uVar5 != 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x90);
      *(undefined8 *)(lVar6 + 0x60) = 0;
      *(undefined8 *)(lVar6 + 0x68) = 0;
      *(undefined8 *)(lVar6 + 0x58) = 0;
      *(ulong *)(lVar6 + 0x78) = uVar5;
      *(undefined1 *)(lVar6 + 0x70) = 0;
      nn::os::GetSystemTick();
      uVar3 = nn::os::ConvertToTimeSpan();
      *(undefined8 *)(lVar6 + 0x58) = uVar3;
      *(undefined1 *)(lVar6 + 0x70) = 1;
      if ((*(char *)(lVar6 + 0x71) == '\0') && (*(char *)(lVar6 + 0x72) == '\0')) {
        nn::os::GetSystemTick();
        lVar4 = nn::os::ConvertToTimeSpan();
        lVar1 = *(long *)(lVar6 + 0x58);
        *(undefined8 *)(lVar6 + 0x58) = 0;
        *(long *)(lVar6 + 0x60) = (lVar4 - lVar1) + *(long *)(lVar6 + 0x60);
        *(long *)(lVar6 + 0x68) = lVar4;
      }
      *(undefined1 *)(lVar6 + 0x71) = 1;
      FUN_0173cc1c(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x90),1,0);
                    /* WARNING: Could not recover jumptable at 0x0173cf98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x218) + 0x5c0))(*(long **)(param_1 + 0x218),1,1);
      return;
    }
  }
  return;
}


