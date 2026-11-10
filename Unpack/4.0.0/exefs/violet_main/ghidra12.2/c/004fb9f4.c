/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004fb9f4; name: FUN_004fb9f4
 */


void FUN_004fb9f4(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined1 *local_38;
  
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(long **)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x1a) = param_3;
  *(undefined8 *)(param_1 + 0x23) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  piVar3 = param_1 + 0x20;
  piVar3[0] = 0;
  piVar3[1] = 0;
  param_1[0x28] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x2b) = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  *param_1 = 0;
  local_38 = (undefined1 *)0x0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x21] = 0;
  do {
                    /* try { // try from 004fba7c to 004fba8b has its CatchHandler @ 004fbad8 */
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,&local_38,piVar3);
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      param_1[0x20] = 0;
      *(undefined1 *)(param_1 + 0x22) = 1;
LAB_004fbac0:
      *(undefined1 *)(param_1 + 0x1c) = uVar2;
      return;
    }
    if (*piVar3 != 0) {
      *(undefined1 **)(param_1 + 0x1e) = local_38;
      uVar2 = *local_38;
      goto LAB_004fbac0;
    }
    param_2 = *(long **)(param_1 + 0x18);
  } while( true );
}


