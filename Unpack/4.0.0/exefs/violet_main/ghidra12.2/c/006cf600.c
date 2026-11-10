/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006cf600; name: FUN_006cf600
 */


void FUN_006cf600(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar4 = *(undefined8 *)(param_2 + 4);
  uVar3 = *(undefined8 *)(param_2 + 2);
  uVar5 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar5;
  *(undefined8 *)(param_1 + 4) = uVar4;
  *(undefined8 *)(param_1 + 2) = uVar3;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_2 + 10) != '\0') {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    uVar3 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xe) = uVar3;
    lVar2 = *(long *)(param_2 + 0x12);
    plVar1 = (long *)(param_1 + 0xe);
    *(long *)(param_1 + 0x12) = lVar2;
    if (lVar2 == 0) {
      *(long **)(param_1 + 0xc) = plVar1;
    }
    else {
      *(long **)(*plVar1 + 0x10) = plVar1;
      *(undefined4 **)(param_2 + 0xc) = param_2 + 0xe;
      *(undefined8 *)(param_2 + 0xe) = 0;
      *(undefined8 *)(param_2 + 0x12) = 0;
    }
    *(undefined1 *)(param_1 + 10) = 1;
  }
  *(undefined **)(param_1 + 0x14) = PTR_DAT_047cfbf0 + 0x10;
                    /* try { // try from 006cf698 to 006cf69f has its CatchHandler @ 006cf6c8 */
  FUN_006cbc88(param_1 + 0x16,param_3 + 8);
                    /* try { // try from 006cf6a8 to 006cf6ab has its CatchHandler @ 006cf6b8 */
  FUN_006ce8bc(param_1 + 0x8e,param_3 + 0x1e8);
  return;
}


