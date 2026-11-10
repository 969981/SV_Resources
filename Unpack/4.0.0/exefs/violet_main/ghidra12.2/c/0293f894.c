/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293f894; name: FUN_0293f894
 */


void FUN_0293f894(undefined8 param_1,byte *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  *param_2 = 0;
  cVar1 = *param_3;
  cVar2 = param_3[1];
  if ((cVar1 != cVar2 && cVar1 != '\x02') && cVar2 != '\x02') {
    pcVar7 = *(code **)(param_3 + 8);
    uVar5 = (*pcVar7)(0);
    bVar3 = 0;
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_01243584(param_1);
      bVar3 = FUN_02988630(uVar6,cVar1,cVar2,0);
    }
    uVar5 = (*pcVar7)(1);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_01243584(param_1);
      bVar4 = FUN_02988630(uVar6,cVar1,cVar2,1);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar7)(2);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_01243584(param_1);
      bVar4 = FUN_02988630(uVar6,cVar1,cVar2,2);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar7)(3);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_01243584(param_1);
      bVar4 = FUN_02988630(uVar6,cVar1,cVar2,3);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar7)(4);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_01243584(param_1);
      bVar4 = FUN_02988630(uVar6,cVar1,cVar2,4);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar7)(5);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_01243584(param_1);
      bVar4 = FUN_02988630(uVar6,cVar1,cVar2,5);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar7)(6);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_01243584(param_1);
      bVar4 = FUN_02988630(uVar6,cVar1,cVar2,6);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar7)(7);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_01243584(param_1);
      bVar4 = FUN_02988630(uVar6,cVar1,cVar2,7);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar7)(8);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_01243584(param_1);
      bVar4 = FUN_02988630(uVar6,cVar1,cVar2,8);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar7)(9);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_01243584(param_1);
      bVar4 = FUN_02988630(uVar6,cVar1,cVar2,9);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar7)(10);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_01243584(param_1);
      bVar4 = FUN_02988630(uVar6,cVar1,cVar2,10);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar7)(0xb);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_01243584(param_1);
      bVar4 = FUN_02988630(uVar6,cVar1,cVar2,0xb);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar7)(0xc);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_01243584(param_1);
      bVar4 = FUN_02988630(uVar6,cVar1,cVar2,0xc);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar7)(0xd);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_01243584(param_1);
      bVar4 = FUN_02988630(uVar6,cVar1,cVar2,0xd);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar7)(0xe);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_01243584(param_1);
      bVar4 = FUN_02988630(uVar6,cVar1,cVar2,0xe);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar7)(0xf);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_01243584(param_1);
      bVar4 = FUN_02988630(uVar6,cVar1,cVar2,0xf);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar7)(0x10);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_01243584(param_1);
      bVar4 = FUN_02988630(uVar6,cVar1,cVar2,0x10);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar7)(0x11);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_01243584(param_1);
      bVar4 = FUN_02988630(uVar6,cVar1,cVar2,0x11);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (*pcVar7)(0x12);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_01243584(param_1);
      bVar4 = FUN_02988630(uVar6,cVar1,cVar2,0x12);
      bVar3 = bVar3 | bVar4;
    }
    *param_2 = bVar3 & 1;
  }
  return;
}


