/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 035138ac; name: FUN_035138ac
 */


undefined4 FUN_035138ac(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0x10,0x110);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_LAB_047c7078;
    uVar2 = nn::audio::GetActiveAudioDeviceChannelCountForOutput();
    *(undefined4 *)(puVar4 + 0x21) = uVar2;
    *(undefined1 *)((long)puVar4 + 0x10c) = 0;
    nn::audio::GetActiveAudioDeviceName((AudioDeviceName *)(puVar4 + 1));
    uVar1 = *(uint *)(PTR_DAT_047e6ce8 + 0x2c) >> 8 & 0xf;
    if ((3 < uVar1 || (*(uint *)(PTR_DAT_047e6ce8 + 0x2c) & 0xff) == 0 && uVar1 != 3) &&
       (PTR_DAT_047e6c18[0xa7] != '\0')) {
      if (DAT_048b0d08 == '\0') {
        iVar3 = nn::audio::AcquireAudioDeviceNotificationForOutput((SystemEvent *)&DAT_048b0cd8);
        if (iVar3 == 0) {
          DAT_048b0d08 = '\x01';
        }
        else if (DAT_048b0d08 == '\0') goto LAB_03513948;
      }
      *(undefined1 *)((long)puVar4 + 0x10c) = 1;
    }
  }
LAB_03513948:
  DAT_048b0cd0 = puVar4;
  uVar2 = 0x34;
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = 1;
  }
  return uVar2;
}


