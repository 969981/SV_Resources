/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bc8ec0; name: FUN_01bc8ec0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01bc8ec0(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((1 < *param_1) || (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 == (undefined8 *)0x0)) {
    if ((DAT_0480e000 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0480e000);
      if (iVar1 != 0) {
        DAT_0480da80 = 0;
        DAT_0480da70 = 0;
        DAT_0480da78 = 0;
        DAT_0480da90 = 0;
        DAT_0480da98 = 0;
        DAT_0480dab0 = 0;
        DAT_0480dab8 = 1;
        DAT_0480daa0 = 0;
        DAT_0480daa8 = 0;
        uRam000000000480dac8 = _UNK_03cab0d8;
        _DAT_0480dac0 = _DAT_03cab0d0;
        memset(&DAT_0480dad0,0,0x44);
        DAT_0480db20 = 0;
        DAT_0480db28 = 0;
        DAT_0480db40 = 0;
        DAT_0480db48 = 0;
        DAT_0480db50 = 0;
        DAT_0480db58 = 0;
        uRam000000000480db68 = _UNK_03cabe58;
        _DAT_0480db60 = _DAT_03cabe50;
        DAT_0480db30 = 0x3f00000000000000;
        DAT_0480dbb0 = 0;
        DAT_0480dc50 = 0;
        DAT_0480dba0 = 0;
        DAT_0480db70 = 0;
        DAT_0480db78 = 0;
        DAT_0480db80 = 0;
        DAT_0480db88 = 0;
        DAT_0480db90 = 0;
        DAT_0480db98 = 0;
        DAT_0480dc60 = PTR_DAT_047d5400 + 0x10;
        uRam000000000480dc78 = 0;
        _DAT_0480dc70 = 0;
        DAT_0480dc80 = PTR_DAT_047d53f0 + 0x10;
        DAT_0480dc88 = 0;
        DAT_0480dc90 = 0;
        uRam000000000480dca8 = 0;
        _DAT_0480dca0 = 0;
        DAT_0480dcb0 = PTR_DAT_047d53f8 + 0x10;
        DAT_0480dec0 = 0x3f80000040000000;
        DAT_0480dec8 = 3;
        DAT_0480dee0 = 0x200000001;
        DAT_0480dcb8 = 0;
        DAT_0480dcc0 = 0;
        DAT_0480dcc8 = 0;
        DAT_0480dcd0 = 0;
        DAT_0480dcd8 = 0;
        DAT_0480dce0 = 0x33f4ccccd;
        DAT_0480dce8 = 0x3f000000;
        DAT_0480dd00 = 0;
        DAT_0480dd04 = 1;
        DAT_0480dd10 = 0;
        DAT_0480dd30 = 0x3f800000;
        DAT_0480dd38 = 0;
        DAT_0480dd60 = 0;
        DAT_0480de00 = 0;
        DAT_0480de40 = 0;
        DAT_0480de38 = 0;
        DAT_0480de68 = 0;
        DAT_0480de70 = 0;
        DAT_0480de78 = 0;
        DAT_0480de80 = 0;
        DAT_0480de88 = 0;
        DAT_0480de90 = 0x33f4ccccd;
        DAT_0480de98 = 0x3f000000;
        DAT_0480deb0 = 0;
        DAT_0480deb4 = 1;
        DAT_0480df20 = 0;
        DAT_0480df18 = 0;
        DAT_0480df10 = 0;
        DAT_0480df08 = 0;
        DAT_0480df00 = 0;
        DAT_0480def8 = 0;
        DAT_0480def0 = 0;
        DAT_0480df68 = 0;
        DAT_0480df60 = 0;
        DAT_0480df58 = 0;
        DAT_0480df50 = 0;
        DAT_0480df48 = 0;
        DAT_0480df40 = 0;
        DAT_0480df38 = 0;
        DAT_0480df30 = 0;
        DAT_0480df90 = 0;
        DAT_0480df98 = 0;
        DAT_0480dfe8 = 0;
        DAT_0480dfe0 = 0;
        DAT_0480dfd8 = 0;
        DAT_0480dfd0 = 0;
        DAT_0480dfc8 = 0;
        DAT_0480dfc0 = 0;
        DAT_0480dff0 = &DAT_cbf29ce484222645;
        DAT_0480dff8 = 0;
        uRam000000000480dcf8 = _UNK_03caaf48;
        _DAT_0480dcf0 = _DAT_03caaf40;
        uRam000000000480dd28 = 0;
        _DAT_0480dd20 = 0;
        uRam000000000480de28 = 0;
        _DAT_0480de20 = 0;
        uRam000000000480de58 = 0;
        _DAT_0480de50 = 0;
        uRam000000000480dea8 = _UNK_03caaf48;
        _DAT_0480dea0 = _DAT_03caaf40;
        uRam000000000480ded8 = 0;
        _DAT_0480ded0 = 0;
        uRam000000000480df78 = _UNK_03cabe58;
        _DAT_0480df70 = _DAT_03cabe50;
        uRam000000000480df88 = _UNK_03cabe58;
        _DAT_0480df80 = _DAT_03cabe50;
        uRam000000000480dfa8 = 0;
        _DAT_0480dfa0 = 0;
        uRam000000000480dfb8 = _UNK_03cabe58;
        _DAT_0480dfb0 = _DAT_03cabe50;
        uRam000000000480dd48 = 0;
        _DAT_0480dd40 = 0;
        uRam000000000480dd58 = _UNK_03cabe58;
        _DAT_0480dd50 = _DAT_03cabe50;
        DAT_0480de10 = DAT_0480dc60;
        DAT_0480de30 = DAT_0480dc80;
        DAT_0480de60 = DAT_0480dcb0;
        FUN_00100190(FUN_015a1250,&DAT_0480da70,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480e000);
      }
      puVar2 = &DAT_0480da70;
    }
    else {
      puVar2 = &DAT_0480da70;
    }
  }
  return puVar2;
}


